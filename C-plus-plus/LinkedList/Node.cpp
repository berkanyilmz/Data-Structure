//
// Created by berkan on 30.08.2021.
//

#include "Node.h"
#include <iostream>

using namespace std;

Node::Node(int number) {
    Node::number = number;
    Node::next = nullptr;
}

Node::~Node()
{
    cout << "Node deleted" << endl;
}