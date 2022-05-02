//
// Created by berkan on 1.09.2021.
//

#ifndef STACK_NODE_H
#define STACK_NODE_H

class Node {
public:
    int number;
    Node * down;
    Node(int number);
    ~Node();
};

#endif //STACK_NODE_H
