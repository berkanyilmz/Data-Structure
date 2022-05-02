//
// Created by berkan on 27.09.2021.
//

#include "MinHeap.h"
#include <iostream>

using namespace std;

MinHeap::MinHeap(int capacity)
{
    MinHeap::minheap = new int[capacity];
    MinHeap::counter = 0;
}

void MinHeap::add(int number)
{
    MinHeap::minheap[counter] = number;
    int value = counter;
    int parent = (counter - 1) / 2;

    while (parent >= 0 && MinHeap::minheap[value] < MinHeap::minheap[parent])
    {
        int temp = MinHeap::minheap[parent];
        MinHeap::minheap[parent] = MinHeap::minheap[value];
        MinHeap::minheap[value] = temp;
        value = parent;
        parent = (value - 1) / 2;
    }
    MinHeap::counter++;
    cout << "Number added" << endl;
}

int MinHeap::del()
{
    MinHeap::minheap[0] = MinHeap::minheap[counter-1];
    MinHeap::minheap[counter-1] = 0;
    int parent = 0;
    int leftChild = (2*parent) + 1;
    int rightChild = (2*parent) + 2;

    while ((leftChild < counter && MinHeap::minheap[leftChild] < MinHeap::minheap[parent]) ||
           (rightChild < counter && MinHeap::minheap[rightChild] < MinHeap::minheap[parent]))
    {
            if (MinHeap::minheap[leftChild] < MinHeap::minheap[rightChild])
            {
                int temp = MinHeap::minheap[parent];
                MinHeap::minheap[parent] = MinHeap::minheap[leftChild];
                MinHeap::minheap[leftChild] = temp;
                parent = leftChild;
            }
            else
            {
                int temp = MinHeap::minheap[parent];
                MinHeap::minheap[parent] = MinHeap::minheap[rightChild];
                MinHeap::minheap[rightChild] = temp;
                parent = rightChild;
            }
            leftChild = (2*parent) + 1;
            rightChild = (2*parent) + 2;
    }
    MinHeap::counter--;
}

void MinHeap::show()
{
    for (int i = 0; i < MinHeap::counter; i++)
    {
        cout << MinHeap::minheap[i] << " ";
    }
    cout << endl;
}