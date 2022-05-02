#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {

    BinaryTree tree;
    tree.add(new Node(10));
    tree.add(new Node(6));
    tree.add(new Node(12));
    tree.add(new Node(5));
    tree.add(new Node(7));
    tree.add(new Node(9));
    tree.add(new Node(13));
    tree.add(new Node(1));
    tree.add(new Node(15));

    tree.show(tree.root);

    cout << endl;

    tree.del(tree.root, 6);
    tree.show(tree.root);

    return 0;
}
