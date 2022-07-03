from node import Node

class Stack:


    def __init__(self):
        self.top = None


    def isEmpty(self):
        return self.top == None


    def peek(self):
        return self.top.val


    def push(self, node:Node):
        if not self.isEmpty():
            node.down = self.top
            self.top = node

        else:
            self.top = node
        print('Node added')


    def pop(self):
        if not self.isEmpty():
            tmp = self.top.val
            self.top = self.top.down
            print('Node deleted !')
            return tmp
        else:
            print('There is nothing to delete !')


    def printStack(self):
        if not self.isEmpty():
            tmp = self.top
            while tmp is not None:
                print(tmp.val, end=' ')
                tmp = tmp.down
            print()
        else:
            print('There is nothing to show !')