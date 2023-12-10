#ifndef POL_H
#define POL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void prefixToPostfixRec(char* prefix, int* index, char* postfix, int* postfixIndex);
void prefixToPostfix(char* prefix, char* postfix);
int isOperator(char c);

#endif