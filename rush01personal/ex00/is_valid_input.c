/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:53:56 by niarygin          #+#    #+#             */
/*   Updated: 2024/02/25 13:02:02 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// If input from command line is valid then function returns 1, 
// if it is not valid then it returns 0.
// Function checks that only one argument is passed,
// checks the length of the string to make sure that 
// valid amount of numbers is passed,
// and checks that line contains only numbers from 1 to 4 and
// one space between them.
int	is_valid_input(int argc, char *str)
{
	int	i;

	if (argc != 2)
		return (0);
	if (ft_strlen(str) != 31)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
		}
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}
