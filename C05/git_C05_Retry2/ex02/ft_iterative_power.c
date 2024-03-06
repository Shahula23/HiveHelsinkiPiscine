/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:59:47 by sroland           #+#    #+#             */
/*   Updated: 2024/02/28 11:20:43 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0 && power == 0)
		return (1);
	result = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			result = result * nb;
			power = power - 1;
		}
	}
	return (result);
}
