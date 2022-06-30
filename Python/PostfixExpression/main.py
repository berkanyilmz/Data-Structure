from stack import Stack, Node
from operators import Operators

def isOperator(opr:str):
    return opr == '+' or opr == '-' or opr == '*' or opr == '/' or opr == '(' or opr == ')'

def infixToPostfix(infixExpression:str):
    stack = Stack()
    expression = ""

    for i in infixExpression:
        if (isOperator(i)):
            expression += " "
            if (i == ')'):
                while stack.peek().operator.opr != '(':
                    expression += stack.pop().operator.opr + " "
                stack.pop()
            elif i == '(':
                stack.push(Node(Operators(i)))
            else:
                operator = Operators(i)
                while not stack.isEmpty() != 0 and stack.peek().operator.priority >= operator.priority:
                    expression += stack.pop().operator.opr + " "
                stack.push(Node(operator))

        else: # is not operator
            expression += i

    while not stack.isEmpty():
            expression += " " + stack.pop().operator.opr

    print("Expression : {}".format(expression))
    return expression


def postfixCalculation(postfixExpression):
    str = ""
    stack = Stack()
    t1 = 0
    t2 = 0
    t3 = 0
    for i in postfixExpression:
        if '0' <= i and i <= '9':
           str += i
        elif i == ' ' and str != "":
            stack.push(Node(value=int(str)))
            str = ""
        elif isOperator(i):
            t1 = stack.pop().value
            t2 = stack.pop().value
            if i == '+':
                t3 = t2+t1
            elif i == '-':
                t3 = t2-t1
            elif i == '/':
                t3 = t2/t1
            elif i == '*':
                t3 = t2*t1
            stack.push(Node(value=t3))
    return stack.pop().value

if __name__ == '__main__':
    infixExpression = "1+2*(8/2)+3" #  1 2 8 2 / * + 3 +
    expression = infixToPostfix(infixExpression)
    result = postfixCalculation(expression)
    print(result)
