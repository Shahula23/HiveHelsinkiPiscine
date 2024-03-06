#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 11;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("%d" "\n", a);
	printf("%d", b);
	return (0);
}
