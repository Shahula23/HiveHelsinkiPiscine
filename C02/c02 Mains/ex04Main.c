/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:52:54 by sroland           #+#    #+#             */
/*   Updated: 2024/02/20 08:52:58 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[20];

	strcpy(str, "asdasdD");
	printf ("%d", ft_str_is_lowercase(str));
	return (0);
}
