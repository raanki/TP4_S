#include <string.h>
#include <stdio.h>

void	print_rec(int a)
{
	if (a >= 31)
		return ;
    printf("%d\n", a);
    print_rec(++a);
}

void    print_rec_sub(void)
{
    print_rec(0);
}

int main ()
{
    print_rec_sub();
	return (0);
}