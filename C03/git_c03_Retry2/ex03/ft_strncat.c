/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:05:58 by sroland           #+#    #+#             */
/*   Updated: 2024/02/22 08:06:00 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				i;
	int				j;

	i = 0;
	j = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && a < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
