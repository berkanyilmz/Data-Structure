#include "stack.h"

int main() {
    Stack stack;
    stack.add(new Node(1));
    stack.add(new Node(2));
    stack.add(new Node(3));
    stack.add(new Node(4));
    stack.add(new Node(5));

    stack.del();
    stack.show();

    return 0;
}
