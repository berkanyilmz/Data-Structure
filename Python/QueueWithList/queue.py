from node import Node

class Queue_:

    def __init__(self):
        self.head:Node = None
        self.tail:Node = None


    def is_empty(self):
        return self.head == None

    def add(self, num):
        node = Node(num)
        if self.is_empty():
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = node

        print("Add tail")

    def delete(self):
        if self.is_empty():
            print("Queue is empty")
            return None
        elif self.head is self.tail:
            deleted_node = self.head
            self.head = None
            self.tail = None
            return deleted_node
        else:
            deleted_node = self.head
            self.head = self.head.next
            deleted_node.next = None
            print("Head is deleted")
            return deleted_node

    def show(self):
        temp = self.head
        while temp is not None:
            print(temp.num)
            temp = temp.next