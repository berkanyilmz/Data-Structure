from node import Node

class CircularLinkedList:

    def __init__(self):
        self.head:Node = None

    def is_empty(self):
        return self.head == None

    def is_exist(self, num):
        temp:Node = self.head
        while (temp.next is not self.head):
            if temp.num == num:
                return True
            temp = temp.next

        if temp.num == num:
            return True
        return False

    def add_head(self, num):
        node = Node(num)
        if self.is_empty():
            self.head = node
            self.head.next = self.head
            self.head.pre = self.head
        else:
            node.next = self.head
            self.head.pre = node
            self.head = node

        print("Added head")

    def add_tail(self, num):
        node = Node(num)
        if self.is_empty():
            self.head = node
        else:
            self.head.pre.next = node
            node.pre = self.head.pre
            self.head.pre = node
            node.next = self.head
        print("Added tail")


    def add(self, num, after):
        node = Node(num)
        if self.is_empty():
            print("Link list is empty !")
        elif self.head.num == after:
            self.add_head(num)
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
        deleted_node = None
        if self.is_empty():
            print("Linked list is empty")
        else:
            deleted_node = self.head
            self.head.pre.next = self.head.next
            self.head.next.pre = self.head.pre
            self.head = self.head.next
            print("Head is deleted")
        return deleted_node



    def del_num(self, num):
        deleted_node = None
        if self.is_empty():
            print("Linked list is empty")
        elif self.head.num == num:
            deleted_node = self.del_head()
        elif self.is_exist(num):
            temp = self.head
            while temp.num != num:
                temp = temp.next
            deleted_node = temp
            temp.pre.next = temp.next
            temp.next.pre = temp.pre
            print("Num is deleted")
        return deleted_node


    def show_list(self):
        temp = self.head
        while temp.next is not self.head:
            print(temp.num)
            temp = temp.next
        print(temp.num) # to show last node