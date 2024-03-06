#include <stdio.h>

int main(void)
{
	int *a;
	int *b;
	int x;
	int y;

	x = 10;
	y = 5;
	a = &x;
	b = &y;

	ft_swap(a, b);

	printf("%d" "\n", x);
	printf("%d", y);
	return (0);
}
