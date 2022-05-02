//
// Created by berkan on 1.09.2021.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
#include "node.h"

class Stack{
public:
    Stack();
    Node * top;
    bool isEmpty();
    void add(Node* node);
    int del();
    void show();
};

#endif //STACK_STACK_H
