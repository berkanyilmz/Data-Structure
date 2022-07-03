#include "Node.cpp"
#include <iostream>

using namespace std;

class Stack {
public:
    int top;
    int size;
    Node **arr;

    Stack(int size) {
        this->size = size;
        top = -1;
        arr = new Node*[size];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size;
    }

    Node* peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        cout << "Stack is empty !" << endl;
        return nullptr;
    }

    void push(Node *node) {
        if (!isFull()) {
            arr[++top] = node;
        }
        else {
            cout << "Stack is Full" << endl;
        }
        cout << "Node added" << endl;
    }

    Node* pop() {
        if (!isEmpty()) {
            top--;
            return arr[top+1];
        }
        cout << "Stack is empty !" << endl;
        return nullptr;
    }

    void printStack() {
        for (int i = top; i > -1; i--) {
            cout << arr[i]->val << " ";
        }
        cout << endl;
    }
};