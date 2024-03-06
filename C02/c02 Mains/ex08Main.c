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

char	 *ft_strlowcase(char *str);

int	main(void)
{
	char	str[20];

	strcpy(str, "ABC");
	printf ("%s", ft_strlowcase(str));
	return (0);
}
