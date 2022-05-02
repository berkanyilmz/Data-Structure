//
// Created by berkan on 30.08.2021.
//

#include "LinkedList.h"
#include  <iostream>

using namespace std;

LinkedList::LinkedList()
{
    LinkedList::head = nullptr;
    LinkedList::tail = nullptr;
}

bool LinkedList::isEmpty()
{
    if (LinkedList::head == nullptr) return true;
    return false;
}

void LinkedList::add(Node *node, int after)
{
    if (isEmpty())
    {
        LinkedList::head = node;
        LinkedList::tail = node;
    }
    else if (search(after))
    {
        Node* tmp = LinkedList::head;

        while (tmp->number != after)
        {
            tmp = tmp->next;
        }
        if (tmp == LinkedList::tail)
        {
            addTail(node);
        }
        else
        {
            node->next = tmp->next;
            tmp->next = node;
            delete tmp;
        }

    }
}

void LinkedList::addTail(Node *node)
{
    if (isEmpty())
    {
        LinkedList::head = node;
        LinkedList::tail = node;
    } else
    {
        LinkedList::tail->next = node;
        LinkedList::tail = node;
    }
}

void LinkedList::addHead(Node *node)
{
    if (isEmpty())
    {
        LinkedList::head = node;
        LinkedList::tail = node;
    } else
    {
        node->next = LinkedList::head;
        LinkedList::head = node;
    }
}

int LinkedList::del(int nodeValue)
{
    if (isEmpty())
    {
        cout << "Linked list is empty" << endl;
    } else
    {
        Node* tmp = LinkedList::head;
        Node* previous = nullptr;

        while (tmp->number != nodeValue)
        {
            previous = tmp;
            tmp = tmp->next;
        }
        int deleted = tmp->number;
        previous->next = tmp ->next;
        delete tmp;
        return deleted;
    }
}

int LinkedList::delHead()
{
    if (isEmpty())
    {
        cout << "Linked list is empty" << endl;
        return -1;
    } else
    {
        int deleted = LinkedList::head->number;
        Node* tmp = LinkedList::head;
        LinkedList::head = LinkedList::head->next;
        delete tmp;
    }
}

int LinkedList::delTail()
{
    if (isEmpty())
    {
        cout << "Linked list is empty" << endl;
    }
    else if (LinkedList::head->next == nullptr)
    {
        LinkedList::head = nullptr;
        LinkedList::tail = nullptr;
    }
    else
    {
        Node* tmp = LinkedList::head;

        while (tmp->next->next != nullptr)
        {
            tmp = tmp->next;
        }
        int deleted = LinkedList::tail->number;
        Node* temp = LinkedList::tail;
        LinkedList::tail = tmp;
        delete temp;
        return deleted;
    }
}

void LinkedList::show()
{
    if (isEmpty())
    {
        cout << "Linked list is empty" << endl;
    } else
    {
        Node* tmp = LinkedList::head;

        while (tmp != nullptr)
        {
            cout << tmp->number << endl;
            tmp = tmp->next;
        }
        delete tmp;
    }
}

bool LinkedList::search(int value)
{
    if (!isEmpty())
    {
        Node* tmp = LinkedList::head;

        while (tmp != nullptr)
        {
            if (tmp->number == value)
            {
                return true;
            }
            tmp = tmp->next;
        }
    }
    return false;
}

Node LinkedList::ithNode(int i)
{
    if (isEmpty())
    {
        cout << "Linked list is empty" << endl;
        return NULL;
    } else
    {
        Node* tmp = LinkedList::head;
        for (int j = 0; j < i; j++) {
            if (tmp->next == nullptr)
            {
                cout << "Value is bigger than number of node of list" << endl;
                return NULL;
            }
            tmp = tmp->next;
        }
        return *tmp;
    }
}