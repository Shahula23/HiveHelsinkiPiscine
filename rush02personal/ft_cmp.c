/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 08:58:35 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/03 16:36:37 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_cmp(int nb, int *split, int i, char *buffer, int j)
{
	if (split[j] == nb)	//if input split = dictionary number
	{
		while (buffer[i] != '\n')	//while not the end of the line of the dictionary number
		{
			if (buffer[i] >= 'a' && buffer[i] <= 'z') //if it's a letter
				write(1, &buffer[i], 1);
			i++;
		}
		j++;
	}
	return (j); //return j to take the next number if input and dictionary are the same
}
