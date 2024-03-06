/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01Main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:48:29 by sroland           #+#    #+#             */
/*   Updated: 2024/02/20 11:48:45 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[50];
	char	s2[50];
	
	strcpy(s1, "aaaaaa");
	strcpy(s2, "aaaa");
	
	printf ("%d \n", ft_strncmp(s1, s2, 10));
	printf ("%d", strncmp(s1, s2, 10));
	return (0);
}
