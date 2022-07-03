from stack import Stack
from node import Node

if __name__ == '__main__':
    stack = Stack()

    stack.printStack()

    stack.push(Node(10))
    stack.push(Node(20))
    stack.push(Node(30))
    stack.push(Node(40))

    stack.printStack()

    stack.pop()

    stack.printStack()