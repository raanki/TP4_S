#include "pol.h"

void prefixToPostfix(char* prefix, char* postfix)
{
    int index = 0;
    int postfixIndex = 0;
    prefixToPostfixRec(prefix, &index, postfix, &postfixIndex);
    postfix[postfixIndex] = '\0';
}

void prefixToPostfixRec(char* prefix, int* index, char* postfix, int* postfixIndex) {
    if (prefix[*index] == '\0') {
        return;
    }

    char c = prefix[(*index)++];

    if (isOperator(c)) {
        prefixToPostfixRec(prefix, index, postfix, postfixIndex);
        prefixToPostfixRec(prefix, index, postfix, postfixIndex);
        postfix[(*postfixIndex)++] = c;
    } else if (isalnum(c)) {
        postfix[(*postfixIndex)++] = c;
    }
}



int isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}