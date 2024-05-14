from node import Node

class BinaryTree:

    def __init__(self):
        self.root:Node = None

    def is_empty(self):
        return self.root == None

    def max_num(self, node:Node):
        if node.right is None:
            return node
        return self.max_num(node.right)

    def min_num(self, node:Node):
        if node.left is None:
            return node
        self.min_num(node.left)

    def add(self, new_node:Node, node:Node, previous:Node = None):
        if self.is_empty():
            self.root = new_node
            return
        if node is None:
            if new_node.num < previous.num:
                previous.left = new_node
            else:
                previous.right = new_node
            print("Node added")
        elif new_node.num < node.num:
            self.add(new_node, node.left, node)
        elif new_node.num > node.num:
            self.add(new_node, node.right, node)

    def preorder(self, node:Node):
        print(node.num, end=" ")
        if node.left is not None:
            self.preorder(node.left)
        if node.right is not None:
            self.preorder(node.right)

    def inorder(self, node:Node):
        if node.left is not None:
            self.inorder(node.left)
        print(node.num, end=" ")
        if node.right is not None:
            self.inorder(node.right)

    def postorder(self, node:Node):
        if node.left is not None:
            self.postorder(node.left)
        if node.right is not None:
            self.postorder(node.right)
        print(node.num, end=" ")

    def delete(self, num, node:Node) -> Node:
        if num == node.num:
            if node.left is None and node.right is None:
                node = None
                return node
            elif node.left is not None:
                node.num = self.max_num(node.left).num
                node.left = self.delete(self.max_num(node.left).num, node.left)
                return node
            else:
                node.num = self.min_num(node.right)
                node.right = self.delete(self.min_num(node.right).num, node.right)
                return node
        elif num < node.num:
            node.left = self.delete(num, node.left)
            return node
        elif num > node.num:
            node.right = self.delete(num, node.right)
            return node