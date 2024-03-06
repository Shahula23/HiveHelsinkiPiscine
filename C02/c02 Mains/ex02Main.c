/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:56:02 by sroland           #+#    #+#             */
/*   Updated: 2024/02/20 08:38:55 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[20];

	strcpy(str, "a");
	printf ("%d", ft_str_is_alpha(str));
	return (0);
}
