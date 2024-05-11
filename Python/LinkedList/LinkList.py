from Node import Node

class LinkedList:

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
            self.head = node

        print("Add head")


    def add_tail(self, num):
        node = Node(num)
        if self.is_empty():
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = node

        print("Add tail")


    def add(self, num, after):
        node = Node(num)
        if self.is_empty():
            print("Link list is empty !")
        elif self.tail.num == num:
            self.add_tail(num)
        elif self.is_exist(after):
            temp:Node = self.head
            while temp is not None:
                if temp.num == after:
                    node.next = temp.next
                    temp.next = node
                    break
                temp = temp.next

            print("Add after {}".format(after))


    def del_head(self):
        if self.is_empty():
            print("Linked list is empty")
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


    def del_tail(self):
        deleted_node = None
        if self.is_empty():
            print("Linked list is empty")
        elif self.head is self.tail:
            deleted_node = self.head
            self.head = None
            self.tail = None
        else:
            deleted_node = self.tail
            temp = self.head
            while temp.next is not self.tail:
                temp = temp.next
            self.tail = temp
            self.tail.next = None
        print("Tail is deleted")
        return deleted_node


    def delete_num(self, num):
        deleted_node = None
        if self.is_empty():
            print("Linked list is empty")
        elif self.head.num == num:
            self.del_head()
        elif self.tail.num == num:
            self.del_tail()
        elif self.is_exist(num):
            temp = self.head
            while temp.next.num != num:
                temp = temp.next
            temp.next = temp.next.next
        print("Num is deleted")


    def show_list(self):
        temp = self.head
        while temp is not None:
            print(temp.num)
            temp = temp.next