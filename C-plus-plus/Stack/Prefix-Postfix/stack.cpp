#include "node.cpp"
#include <iostream>

using namespace std;

class Stack {
public:
    Node* top;

    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    Operator* peek() {
        return top->op;
    }

    void push(Node *node) {
        if (isEmpty()) {
            top = node;
        }
        else {
            node->down = top;
            top = node;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        }
        else {
            Node* deleted = top;
            top = top->down;
            delete deleted;
        }
    }


    void show() {
        Node* tmp = top;

        while (tmp != nullptr) {
            cout << tmp->value << endl;
            tmp = tmp->down;
        }
    }
};