/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:40:34 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/03 17:12:00 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_len(int nb)
{
	int	i;

	i = 0;
	while (nb != 0)	//while the number is not 0
	{
		nb /= 10;	//divide the number until 0 and count
		i++;
	}
	i--;
	return (i);	//return how many digits  we have
}

int	*ft_split2(int nb, int *nb_split, int i)
{
	int	c;

	c = 10;
	while (nb > 9 && i >= 0)
	{
		nb = nb / 10;	//we remove the digit we already write
		c *= 10;
		nb_split[i] = c;	//if 2345 we want 1000, 100, each time we remove 1 digit, we multiply c by 10
		nb_split[i - 1] = (nb % 10);	//add the last digit we have
		i -= 2;
	}
	return (nb_split);
}

int	*ft_split(int nb)
{
	int	*nb_split;
	int	i;

	if ((nb % 100) > 9 && (nb % 100) < 20)	//if the 2 last digits are between 9 and 20
	{
		i = (ft_len(nb) * 2) - 1;	//length * 2 : if 2314 we want 2 slots for the 2 and 3, one for 14 and one for '\0'
		nb_split = malloc((i) * sizeof(int *));
		nb_split[i] = '\0';	//start by the end of the pointer
		i--;
		nb_split[i] = (nb % 100);	// we want the 2 last digits 
		nb = nb / 10;	// we divid the number to keep it without the last digits the other one will be remove with the split2 function
		i--;
	}
	else	//if we have the 2 last digits between 20 and 99
	{
		i = (ft_len(nb) * 2);	//length * 2 : if 2345 we want 2 slots for 2, 3 and 4, one for 5 and one for '\0'
		nb_split = malloc((i) * sizeof(int *));
		nb_split[i] = '\0';	//add the null character at the end of the pointer
		i--;
		nb_split[i] = nb % 10;	//we want the last digit
		nb = nb / 10;	//we remove the last digit
		nb_split[i - 1] = (nb % 10) * 10; //if 2345 we add 40 to the pointer, so the last digit * by 10
		i -= 2;
	}
	nb_split = ft_split2(nb, nb_split, i);
	return (nb_split);
}
