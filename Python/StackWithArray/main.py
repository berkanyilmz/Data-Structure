from stack import Stack

if __name__ == '__main__':
    stack = Stack()

    stack.printStack()

    stack.push(10)
    stack.push(20)
    stack.push(30)
    stack.push(40)
    stack.push(50)

    stack.printStack()

    stack.pop()

    stack.printStack()