#include <iostream>

using namespace std;

void selectionSort(int arr[], int size)
{
    int min, index;
    for (int i = 0; i < size-1; i++)
    {
        min = arr[i];
        index = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        if (i != index) {
            arr[index] = arr[i];
            arr[i] = min;
        }
    }
}

int main() {
    int array[] = {56, 134,45, 87, 23, 76, 12, 67, 3, 65, 133, 75};
    selectionSort(array, 12);
    for (int i = 0; i < 12; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
