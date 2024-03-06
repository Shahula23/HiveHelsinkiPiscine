/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:16:04 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/03 16:21:32 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0 && str[i] > 9)
			return (1);
		while (str[i] >= 0 && str[i] <= 9)
			result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
}
