/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:44:13 by sroland           #+#    #+#             */
/*   Updated: 2024/02/19 14:44:16 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Hola";
	char	dest[20];
	char	dest_ft[20];

	strcpy(dest, src);
	ft_strncpy(dest_ft, src, 20);
	write(1, dest, 20);
	write(1, dest_ft, 20);
	return (0);
}
