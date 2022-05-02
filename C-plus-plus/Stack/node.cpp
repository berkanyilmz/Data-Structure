//
// Created by berkan on 1.09.2021.
//

#include "node.h"
#include <iostream>

using namespace std;

Node::Node(int number) {
    Node::number = number;
    Node::down = nullptr;
}

Node::~Node()
{
    cout << "Node is deleting" << endl;
}