#include <stdio.h>

void towers(int n, char frompeg, char topeg, char auxpeg)
{
    if (n == 1)
    {
        printf("Move disk 1 from peg %c to peg %c\n", frompeg, topeg);
        return;
    }
    towers(n - 1, frompeg, auxpeg, topeg);
    printf("Move disk %d from peg %c to peg %c\n", n, frompeg, topeg);
    towers(n - 1, auxpeg, topeg, frompeg);
}

int main()
{
    int n = 4;
    towers(n, 'A', 'C', 'B');
    return 0;
}
