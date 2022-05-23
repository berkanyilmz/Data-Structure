#include <iostream>
#include "postfix_prefix.cpp"

using namespace std;

int main() {
    PostfixPrefix pp;
    string expression = pp.infixToPostfix("4+10*5+(4+20)"); // 78
    pp.postfixCalculation(expression);
    return 0;
}