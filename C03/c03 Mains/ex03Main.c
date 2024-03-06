/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03Main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:15:17 by sroland           #+#    #+#             */
/*   Updated: 2024/02/22 08:15:32 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[20];
	char	dest[20];

	strcpy(src, "SaulHarryRoland");
	strcpy(dest, "Hello");
	ft_strncat(dest, src, 6);
	printf ("%s", dest);
	return (0);
}
