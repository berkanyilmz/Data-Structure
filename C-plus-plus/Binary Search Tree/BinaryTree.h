//
// Created by berkan on 11.09.2021.
//

#ifndef BINARY_SEARCH_TREE_BINARYTREE_H
#define BINARY_SEARCH_TREE_BINARYTREE_H

#include "Node.h"

class BinaryTree {
public:
    Node* root;
    BinaryTree();
    bool isEmpty();
    void add(Node* node);
    Node* del(Node* root, int value);
    void show(Node* temp);
    void search();
    Node* maximal(Node* node);
    Node* minimum(Node* node);

};


#endif //BINARY_SEARCH_TREE_BINARYTREE_H
