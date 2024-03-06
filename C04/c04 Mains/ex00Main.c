#include <string.h>
#include <stdio.h>

int main()
{
	char	str[50];
	
	strcpy(str, "");
    printf("Length of string a = %d \n", ft_strlen(str));
    printf("Length of string a = %lu", strlen(str));
	return (0);
}
