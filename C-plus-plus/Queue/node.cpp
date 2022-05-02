//
// Created by berkan on 1.09.2021.
//

#include "node.h"
#include <iostream>

Node::Node(int number)
{
    Node::number = number;
    Node::next = nullptr;
}

Node::~Node()
{
    std::cout << "Node is deleting" << std::endl;
}