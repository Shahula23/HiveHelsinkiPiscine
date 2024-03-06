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

char *ft_strupcase(char *str);

int	main(void)
{
	char	str[20];

	strcpy(str, "abc");
	printf ("%s", ft_strupcase(str));
	return (0);
}
