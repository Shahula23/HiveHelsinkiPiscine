#include <stdio.h>
#include <string.h>


int	main(void)
{
	char	str[50];
	int		value;

	strcpy(str, "     ---+---+1234ab567");
	value = ft_atoi(str);
	printf("String to be Converted: %s\n", str);
	printf("Converted to Integer: %d\n", value);
	return (0);
}

