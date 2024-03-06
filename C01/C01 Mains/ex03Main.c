#include <stdio.h>

int main(void)
{
	int *div;
	int *mod;
	int a;
	int b;
	int division;
	int rem;

	a = 11;
	b = 3;

	div = &division;
	mod = &rem;

	ft_div_mod(a, b, div, mod);

	printf("%d" "\n", division);
	printf("%d", rem);
	return (0);
}
