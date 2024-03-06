/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read_close.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:51:00 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/03 16:36:33 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	convert(ssize_t reader, char *buffer, int nb_input)
{
	ssize_t	i;
	int		nb;
	int		*split;
	int		j;

	i = 0;
	j = 0;
	nb = 0;
	while (i < reader)	// while we're not at the end of the dictionary
	{
		if (buffer[i] >= '0' && buffer[i] <= '9')	//if it's a number
			nb = nb * 10 + (buffer[i] - '0');	//convert numbers : char to int
		if (buffer[i] == ':')
		{
			split = ft_split(nb_input);	//split the number -> 2345 -> 2 1000 3 100 40 5
			if (split[j] != '\0')	//if we're not after 5 in the exemple
				j = ft_cmp(nb, split, i, buffer, j);	//compare the input number to the dictionary number
			nb = 0;
		}
		i++;
	}
}

int	openfile(char *file, int nb_input)
{
	int		filepath;
	char	*buffer;
	ssize_t	reader;

	filepath = open(file, O_RDONLY);	//open dictionary
	buffer = malloc(1024 * sizeof(char *));	//allocate memory for buffer
	if (filepath > 0)
	{
		while ((reader = read(filepath, buffer, 1024)) > 0)	//read the dictionary
			convert(reader, buffer, nb_input);
	}
	else
	{
		close (filepath);	//opening error
		return (-1);
	}
	free (buffer);
	close (filepath);
	return (0);
}
