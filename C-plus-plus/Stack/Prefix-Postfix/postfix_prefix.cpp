#include "stack.cpp"
#include <iostream>
#include <sstream>

using namespace std;

class PostfixPrefix {
public:

    string expression;

    PostfixPrefix() {
        string expression = "";
    }

    bool isOperator(char chr) {
        return chr == '+' || chr == '-' || chr == '*' || chr == '/' || chr == '%' || chr == '(' || chr == ')';
    }

    string infixToPostfix(string infixExpression) {
        Stack stack;
        int len = infixExpression.length();
        for (int i = 0; i < len; i++) {
            if (isOperator(infixExpression[i])) {
                expression += " ";
                if (infixExpression[i] == ')') {
                    while (!stack.isEmpty() && stack.peek()->anOperator != '(') {
                        expression += stack.peek()->anOperator;
                        expression += " ";
                        stack.pop();
                    }
                    stack.pop();
                }
                else if (infixExpression[i] == '(') {
                    stack.push(new Node(new Operator('(')));
                }
                else { //not ')'
                    Operator *anOperator = new Operator(infixExpression[i]);
                    while (!stack.isEmpty() && stack.peek()->priority >= anOperator->priority) {
                        expression += stack.peek()->anOperator;
                        expression += " ";
                        stack.pop();
                    }
                    stack.push(new Node(anOperator));
                }
            }
            else { //is not an operator
                expression += infixExpression[i];
            }

        }
        while (!stack.isEmpty()) {
            expression += " ";
            expression += stack.peek()->anOperator;
            stack.pop();
        }
        cout << "Expression : " + expression << endl;
        return expression;
    }

    void postfixCalculation(string postfixExpression) {
        int t1 = 0, t2 = 0, t3 = 0;
        string str;
        Stack stack;
        int len = postfixExpression.length();
        for (int i = 0; i <len; i++) {
            if ('0' <= postfixExpression[i] && postfixExpression[i] <= '9') {
                str += postfixExpression[i];
            }
            else if (postfixExpression[i] == ' ' && str != "") {
                int val = stoi(str);
                stack.push(new Node(val));
                str = "";
            }
            else if (isOperator(postfixExpression[i])) {
                t1 = stack.top->value;
                stack.pop();
                t2 = stack.top->value;
                stack.pop();
                switch (postfixExpression[i]) {
                    case '+':
                        t3 = t2 + t1;
                        break;
                    case '-':
                        t3 = t2 - t1;
                        break;
                    case '*':
                        t3 = t2 * t1;
                        break;
                    case '/':
                        t3 = t2 / t1;
                        break;
                }
                stack.push(new Node(t3));
            }
        }
        cout << "Result : " << stack.top->value << endl;
        stack.pop();
    }
};