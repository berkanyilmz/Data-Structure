//
// Created by berkan on 1.09.2021.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "node.h"

class Queue {
public:
    Queue();
    Node * head;
    Node * final;
    void add(Node* node);
    int del();
    bool isEmpty();
    void show();
};

#endif //QUEUE_QUEUE_H
