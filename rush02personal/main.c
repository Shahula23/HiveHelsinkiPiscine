/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:16:35 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/03 17:16:48 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		nb;
	char	*file;

	if (argc == 2)
	{
		file = "number.dict";
		nb = ft_atoi(argv[1]);
		openfile(file, nb);
	}
	if (argc == 3)
	{
		file = argv[1];
		nb = ft_atoi(argv[2]);
		openfile(file, nb);
	}
	write(1, "Error somewhere sorry :( \n", 24);
	return (0);
}
