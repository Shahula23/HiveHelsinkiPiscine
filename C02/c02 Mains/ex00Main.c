/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:06:19 by sroland           #+#    #+#             */
/*   Updated: 2024/02/19 14:38:00 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[6];
	char	dest[6];

	strcpy(src, "hello");
	ft_strcpy(dest, src);
	printf ("Src: %s \n", src);
	printf ("Dest: %s", dest);
	return (0);
}
