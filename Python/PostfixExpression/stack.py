from node import Node

class Stack:


    def __init__(self):
        self.stack = list()
        self.top:Node = None


    def isEmpty(self):
        return self.top is None


    def peek(self):
        return self.top


    def push(self, node:Node):
        if self.isEmpty():
            self.top = node
        else:
            node.down = self.top
            self.top = node
        print("Node added")


    def pop(self):
        if self.isEmpty():
            print("Stack is empty !")
        else:
            deleted = self.top
            self.top = self.top.down
            return deleted
        print("Node deleted")