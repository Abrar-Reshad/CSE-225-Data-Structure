#include <iostream>
#include <cstring>
#include "stacktype.h"
#include "stacktype.cpp"

bool IsOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

bool IsOperand(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool IsValidExpression(const char* expression) {
    StackType<char> stack;
    int length = strlen(expression);

    for (int i = 0; i < length; i++) {
        char ch = expression[i];
        if (IsOperand(ch)) {
            while (IsOperand(expression[i + 1]))
                i++;
        } else if (ch == '(') {
            stack.Push(ch);
        } else if (ch == ')') {
            if (stack.IsEmpty())
                return false;
            stack.Pop();
        } else if (IsOperator(ch)) {
            if (stack.IsEmpty())
                return false;
            char top = stack.Top();
            if (top == '(')
                return false;
            stack.Pop();
        }
    }

    return stack.IsEmpty();
}

int main() {
    std::cout << "Enter an infix expression: ";
    char expression[100];
    std::cin.getline(expression, 100);

    if (IsValidExpression(expression)) {
        std::cout << "The expression is valid." << std::endl;
    } else {
        std::cout << "The expression is not valid." << std::endl;
    }

    return 0;
}
