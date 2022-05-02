#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList list;
    list.addTail(new Node(1));
    list.addTail(new Node(2));
    list.addTail(new Node(3));
    list.addTail(new Node(4));
    list.addTail(new Node(5));
    list.addTail(new Node(6));
    list.show();

    list.delHead();
    list.show();




    return 0;
}
