/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01Main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:48:29 by sroland           #+#    #+#             */
/*   Updated: 2024/02/20 11:48:45 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[20];
	char	dest[20];

	strcpy(src, "Saul");
	strcpy(dest, "Hello");
	ft_strcat(dest, src);
	printf ("%s", dest);
	return (0);
}
