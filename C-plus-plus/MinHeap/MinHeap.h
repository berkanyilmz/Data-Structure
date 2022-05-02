//
// Created by berkan on 27.09.2021.
//

#ifndef MINHEAP_MINHEAP_H
#define MINHEAP_MINHEAP_H

class MinHeap
{
public:

    int counter;
    int *minheap;
    MinHeap(int capacity);
    void add(int number);
    int del();
    void show();
};

#endif //MINHEAP_MINHEAP_H
