//
// Created by berkan on 11.09.2021.
//

#ifndef BINARY_SEARCH_TREE_NODE_H
#define BINARY_SEARCH_TREE_NODE_H

class Node{
public:
    int number;
    Node *left, *right;
    Node(int number);
    ~Node();
};

#endif //BINARY_SEARCH_TREE_NODE_H
