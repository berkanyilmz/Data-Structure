#include <iostream>
#include "operator.cpp"

using namespace std;

class Node {
public:
    Operator* op;
    int value;
    Node* down;

    Node(Operator *op) {
        this->op = op;
        down = nullptr;
    }

    Node(int value) {
        this->value = value;
        down = nullptr;
    }

    ~Node() {
        cout << "Node deleted" << endl;
    }
};