#include <stdio.h>

int main(void)
{
	int *nbr;
	int x;

	x = 10;
	nbr = &x;

	ft_ft(nbr);

	printf("%d", x);
	return (0);
}
