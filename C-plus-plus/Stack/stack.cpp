//
// Created by berkan on 1.09.2021.
//

#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack()
{
    Stack::top = nullptr;
}

bool Stack::isEmpty()
{
    if (Stack::top == nullptr) return true;
    return false;
}

void Stack::add(Node *node)
{
    if (isEmpty())
    {
        Stack::top = node;
    } else
    {
        node->down = Stack::top;
        Stack::top = node;
    }
}

int Stack::del()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    } else
    {
        Node * tmp = Stack::top;
        int deleted = tmp->number;
        Stack::top = Stack::top->down;
        delete(tmp);
        return deleted;
    }
}

void Stack::show()
{
    Node * tmp = Stack::top;

    while (tmp != nullptr)
    {
        cout << tmp->number << endl;
        tmp = tmp->down;
    }
}