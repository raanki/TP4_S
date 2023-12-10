#include "parse.h"

int main()
{
    char *tests[10] = {
        "a+b",                          // valide
        "a*(b+c)",                      // valide
        "(a+b",                         // invalide (parenthèse non fermée)
        "a+)",                          // invalide (parenthèse non ouverte)
        "a++b",                         // invalide (deux opérateurs successifs)
        "(a+b)*(c-d)",                  // valide
        "a*(b+c*(d+e))",                // valide
        "((a+b))",                      // valide
        "a+((b+c)*(d+e))+f",            // valide
        "a+b*(c+(d*(e+f)+g)*h)+i-j*k("  // invalide
    };

    for (int i = 0; i < 10; i++)
    {
        int pos = 0;
        if (expr(tests[i], strlen(tests[i]), &pos) && pos == strlen(tests[i]))
            printf("\"%s\" est valide\n", tests[i]);
        else
            printf("\"%s\" est invalide\n", tests[i]);
    }

    return 0;
}
