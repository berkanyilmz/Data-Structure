#include <iostream>

using namespace std;

class Operator {
public:
    char anOperator;
    int priority;

    Operator(char op) {
        anOperator = op;
        switch (op) {
            case '(':
                priority = 0;
                break;
            case '+':
            case '-':
                priority = 1;
                break;
            case '*':
            case '/':
                priority = 2;
                break;
            case ')':
                priority = 3;
                break;
        }
    }

};