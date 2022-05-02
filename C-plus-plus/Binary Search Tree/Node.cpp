//
// Created by berkan on 11.09.2021.
//

#include "Node.h"
#include <iostream>

using namespace std;

Node::Node(int number)
{
    this->Node::number = number;
    Node::left = nullptr;
    Node::right = nullptr;
}

Node::~Node()
{
    cout << "Node deleted" << endl;
}