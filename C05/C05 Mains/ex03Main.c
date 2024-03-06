/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03Main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:00:36 by sroland           #+#    #+#             */
/*   Updated: 2024/02/28 14:00:56 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 4;
	power = 4;
	printf ("%d", ft_recursive_power(nb, power));
	return (0);
}

