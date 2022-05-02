//
// Created by berkan on 30.08.2021.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H


class Node {
public:
    Node* next;
    int number;
    Node(int number);
    ~Node();
};


#endif //LINKEDLIST_NODE_H
