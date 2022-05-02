//
// Created by berkan on 1.09.2021.
//

#include "queue.h"
#include <iostream>

Queue::Queue()
{
    Queue::head = nullptr;
    Queue::final = nullptr;
}

bool Queue::isEmpty()
{
    if (Queue::head == nullptr) return true;
    return false;
}

void Queue::add(Node *node)
{
    if (isEmpty())
    {
        Queue::head = node;
        Queue::final = node;
    } else
    {
        Queue::final->next = node;
        Queue::final = node;
    }
}

int Queue::del()
{
    if (isEmpty())
    {
        std::cout << "Queue is empty" << std::endl;
    } else
    {
        Node* tmp = Queue::head;
        int deleted = tmp->number;
        Queue::head = Queue::head->next;
        delete tmp;
        return deleted;
    }
}

void Queue::show()
{
    Node * tmp = Queue::head;

    while (tmp != nullptr)
    {
        std::cout << tmp->number << std::endl;
        tmp = tmp->next;
    }
}