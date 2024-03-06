/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:40:23 by sroland           #+#    #+#             */
/*   Updated: 2024/02/20 08:40:30 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[20];

	strcpy(str, "234");
	printf ("%d", ft_str_is_numeric(str));
	return (0);
}
