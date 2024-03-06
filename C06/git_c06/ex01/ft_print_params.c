/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:38:23 by sroland           #+#    #+#             */
/*   Updated: 2024/02/29 13:38:26 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (n < argc)
	{
		while (argv[n][i] != '\0')
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
		i = 0;
	}
	return (0);
}
