#include <iostream>

using namespace std;

void insertionSort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int j = i;
        while (j != 0 && arr[j] < arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main() {
    int array[] = {23, 13, 65, 47, 14, 95, 71, 12, 35, 96, 25, 50};
    insertionSort(array, 12);
    for (int i : array)
    {
        cout << i << " ";
    }
    return 0;
}
