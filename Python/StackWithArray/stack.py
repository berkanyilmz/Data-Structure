class Stack:


    def __init__(self):
        self.stack = list()


    def isEmpty(self):
        return len(self.stack) == 0


    def peek(self):
        return self.stack[-1]


    def push(self, val):
        self.stack.append(val)
        print('Node added')


    def pop(self):
        if self.isEmpty():
            print('Stack is empty !')
            return None
        else:
            return self.stack.pop()
        print('Node deleted')


    def printStack(self):
        if self.isEmpty():
            print('There is nothing to print')

        else:
            for i in self.stack:
                print(i, end=' ')
            print()