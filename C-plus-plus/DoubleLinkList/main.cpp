#include <iostream>
#include "DoubleLinkList.cpp"


using namespace std;

int main() {
    DoubleLinkList list;
    for (int i = 1; i <= 5; i++)
        list.addTail(new Node(i));
    list.showForward();
    list.addHead(new Node(0));
    list.add(new Node(90), 2);
    list.showForward();

    list.del(1);
    list.showBackward();
    list.delHead();
    list.showForward();
    list.delTail();
    list.showBackward();

    return 0;
}
