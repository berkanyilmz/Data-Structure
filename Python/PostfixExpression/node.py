from operators import Operators

class Node:

    def __init__(self, opr:Operators='', value = -1):
        self.value = value
        self.operator = opr
        self.down:Node = None
