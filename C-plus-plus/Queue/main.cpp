#include "queue.h"

int main() {

    Queue queue;
    queue.add(new Node(2));
    queue.add(new Node(3));
    queue.add(new Node(1));
    queue.add(new Node(7));
    queue.add(new Node(4));
    queue.add(new Node(5));
    queue.add(new Node(6));

    queue.del();

    queue.show();

    return 0;
}
