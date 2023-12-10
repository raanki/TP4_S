#include "pol.h"

int main()
{
    char* tests[10] = {
        "-++A*BCD*EF",
        "/L/W+P/",
        "*P*H*",
        "/H/",
        "*F*Y*V",
        "/A*Q",
        "*I-X/",
        "+K+Y/K",
        "-R-K-M",
        "-X+R"
    };

    char postfixExpr[50];

    for (int i = 0; i < 10; i++) {
        prefixToPostfix(tests[i], postfixExpr);
        printf("Prefix: %s\nPostfix: %s\n\n", tests[i], postfixExpr);
    }

    return 0;
}
