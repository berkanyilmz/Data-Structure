//
// Created by berkan on 30.08.2021.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include "Node.h"

class LinkedList {
public:
    Node* head;
    Node* tail;
    LinkedList();
    void addHead(Node *node);
    void addTail(Node *node);
    void add(Node *node, int after);
    int del(int node);
    int delTail();
    int delHead();
    void show();
    bool isEmpty();
    bool search(int value);
    Node ithNode(int i);
};


#endif //LINKEDLIST_LINKEDLIST_H
