/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:00:33 by sroland           #+#    #+#             */
/*   Updated: 2024/02/20 09:00:34 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	str[20];

	strcpy(str, "213213!!!~");
	printf ("%d", ft_str_is_printable(str));
	return (0);
}
