#include "parse.h"

int getsymb(char *str, int length, int *ppos)
{
    if (*ppos < length)
        return str[(*ppos)++];
    return EOF;
}

int factor(char *str, int length, int *ppos)
{
    int pos = *ppos;
    int symb = getsymb(str, length, ppos);

    if (isalpha(symb))
        return 1;
    else if (symb == '(')
    {
        if (!expr(str, length, ppos))
            return 0;

        symb = getsymb(str, length, ppos);
        if (symb != ')')
        {
            *ppos = pos;
            return 0;
        }
        return 1;
    }
    else
    {
        *ppos = pos;
        return 0;
    }
}


int term(char *str, int length, int *ppos)
{
    if (!factor(str, length, ppos))
        return 0;

    while (1)
    {
        int pos = *ppos;
        int symb = getsymb(str, length, ppos);

        if (symb == '*')
        {
            if (!factor(str, length, ppos))
            {
                *ppos = pos;
                return 0;
            }
        }
        else
        {
            *ppos = pos;
            break;
        }
    }
    return 1;
}


int expr(char *str, int length, int *ppos)
{
    if (!term(str, length, ppos))
        return 0;

    while (1)
    {
        int pos = *ppos;
        int symb = getsymb(str, length, ppos);

        if (symb == '+')
        {
            if (!term(str, length, ppos))
            {
                *ppos = pos;
                return 0;
            }
        }
        else
        {
            *ppos = pos;
            break;
        }
    }
    return 1;
}