#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	multiply_rec(int a, int b)
{
	if (a == 0 || b == 0)
		return 0;
	a--;
	return b + multiply_rec(a, b);
}

int main (int argc, char **argv)
{
	if (argc == 3)
		printf("%d * %d = %d\n", atoi(argv[1]), atoi(argv[2]), multiply_rec(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}