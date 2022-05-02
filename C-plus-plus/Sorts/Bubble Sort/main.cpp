#include <iostream>

using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {34, 56, 13, 97, 35, 0, 12, 78, 95, 72};
    bubbleSort(array, 10);
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
