#include <iostream>

using namespace std;

void merge(int arr[], int begin, int mid, int end) {
    int n1 = (mid - begin) + 1;
    int n2 = end - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[begin+i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + j + 1];
    }

    int i = 0, j = 0, k = begin;

    while (i < n1 && j < n2) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}


void mergeSort(int arr[], int begin, int end) {
    if (begin < end) {
        int mid = (begin + end) / 2;
        mergeSort(arr, begin, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, begin, mid, end);
    }
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {5,4,3,2,1};
    int len = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, len-1);
    printArray(arr, len);
    return 0;
}
