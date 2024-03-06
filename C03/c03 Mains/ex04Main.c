#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[50];
	char	to_find[50];

	strcpy(str, "SaulHarry");
	strcpy(to_find, "Saldr");

	printf ("%s \n", ft_strstr(str, to_find));
	printf ("%s \n", strstr(str, to_find));
	return (0);
}
