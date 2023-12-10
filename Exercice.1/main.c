#include <string.h>
#include <stdio.h>

int	multiply_rec(int a, int b)
{
	if (a == 0)
		return 0;
	a--;
	return b + multiply_rec(a, b);
}

int main ()
{
	int a;
	int	b;

	a = 3;
	b = 4;
	printf("%d * %d = %d\n", a, b, multiply_rec(a, b));

	return (0);
}