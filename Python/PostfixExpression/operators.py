class Operators:

    def __init__(self, opr:str):
        self.opr = opr
        if opr == '(':
            self.priority = 0
        elif opr == '+' or opr == '-':
            self.priority = 1
        elif opr == '*' or opr == '/':
            self.priority = 2
        elif opr == ')':
            self.priority = 3