#include <iostream>

using namespace std;

int binarySearch(int arr[], int val, int size) {
    int beg = 0;
    int end = size - 1;
    int mid = (beg + end) / 2;

    while (beg < end) {
        if (arr[mid] == val) {
            return mid;
        }
        else if (val < arr[mid]) {
            end = mid-1;
        }
        else {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    return -1;
}

int binarySearchRecursive(int arr[], int beg, int mid, int end, int val) {
    if (beg <= end) {
        if (arr[mid] == val) {
            return mid;
        }
        else if (val < arr[mid]) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
        return binarySearchRecursive(arr, beg, mid, end, val);
    }
    return -1;
}

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = i+1;
    }
    int i = binarySearch(arr, 12, 20);
    cout << "Index : " << i << endl;

    i = binarySearchRecursive(arr, 0, 10, 20, 10);
    cout << "Index : " << i << endl;
    return 0;
}
