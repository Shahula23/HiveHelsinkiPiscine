/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00Main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:48:29 by sroland           #+#    #+#             */
/*   Updated: 2024/02/20 11:48:45 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char	s1[20];
	char	s2[20];
	
	strcpy(s1, "hel");
	strcpy(s2, "hel");
	printf ("%d", ft_strcmp(s1, s2));
	return (0);
}
