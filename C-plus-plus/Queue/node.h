//
// Created by berkan on 1.09.2021.
//

#ifndef QUEUE_NODE_H
#define QUEUE_NODE_H

class Node {
public:
    Node(int number);
    ~Node();
    int number;
    Node* next;
};

#endif //QUEUE_NODE_H
