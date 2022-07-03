#include <iostream>

using namespace std;

class Node {
public:
    int val;

    Node(int val) {
        this->val = val;
    }

    //Node() {}

    ~Node() {
        cout << "Node deleted" << endl;
    }
};