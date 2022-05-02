#include <iostream>
#include "MinHeap.h"

using namespace std;

int main() {
    MinHeap heap(15);

    heap.add(5);
    heap.add(10);
    heap.add(3);
    heap.add(8);
    heap.add(2);
    heap.add(11);
    heap.add(7);
    heap.add(9);

    heap.show();

    heap.del();
    heap.show();
    cout << heap.minheap[heap.counter] << endl;

    return 0;
}
