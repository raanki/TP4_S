#ifndef PARSE_H
#define PARSE_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getsymb(char *str, int length, int *ppos);
int factor(char *str, int length, int *ppos);
int term(char *str, int length, int *ppos);
int expr(char *str, int length, int *ppos);

#endif