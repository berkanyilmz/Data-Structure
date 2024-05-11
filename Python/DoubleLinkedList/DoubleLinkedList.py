from node import Node

class DoubleLinkedList:

    def __init__(self):
        self.head:Node = None
        self.tail:Node = None


    def is_empty(self):
        return self.head == None


    def is_exist(self, num):
        temp:Node = self.head
        while (temp is not None):
            if temp.num == num:
                return True
            temp = temp.next
        return False

    def add_head(self, num):
        node = Node(num)
        if self.is_empty():
            self.head = node
            self.tail = node
        else:
            node.next = self.head
            self.head.pre = node
            self.head = node

        print("Added head")


    def add_tail(self, num):
        node = Node(num)
        if self.is_empty():
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            node.pre = self.tail
            self.tail = node

        print("Added tail")


    def add(self, num, after):
        node = Node(num)
        if self.is_empty():
            print("Link list is empty !")
        elif self.tail.num == after:
            self.add_tail(num)
        elif self.is_exist(after):
            temp:Node = self.head
            while temp.num != after:
                temp = temp.next

            node.next = temp.next
            temp.next.pre = node
            node.pre = temp
            temp.next = node

            print("Added after {}".format(after))


    def del_head(self):
        deleted_node = Node
        if self.is_empty():
            print("Linked list is empty")
        elif self.head is self.tail:
            deleted_node = self.head
            self.head = None
            self.tail = None
            print("Head is deleted")
        else:
            deleted_node = self.head
            self.head = self.head.next
            self.head.pre = None
            deleted_node.next = None
            print("Head is deleted")
        return deleted_node


    def del_tail(self):
        deleted_node = None
        if self.is_empty():
            print("Linked list is empty")
        elif self.head is self.tail:
            deleted_node = self.head
            self.head = None
            self.tail = None
            print("Tail is deleted")
        else:
            deleted_node = self.tail
            self.tail = self.tail.pre
            self.tail.next = None
            print("Tail is deleted")
        return deleted_node


    def del_num(self, num):
        deleted_node = None
        if self.is_empty():
            print("Linked list is empty")
        elif self.head.num == num:
            deleted_node = self.del_head()
        elif self.tail.num == num:
            deleted_node = self.del_tail()
        elif self.is_exist(num):
            temp = self.head
            while temp.num != num:
                temp = temp.next
            deleted_node = temp
            temp.pre.next = temp.next
            temp.next.pre = temp.pre
            print("Num is deleted")
        return deleted_node


    def show_list_forward(self):
        temp = self.head
        while temp is not None:
            print(temp.num)
            temp = temp.next


    def show_list_backward(self):
        temp = self.tail
        while temp is not None:
            print(temp.num)
            temp = temp.pre