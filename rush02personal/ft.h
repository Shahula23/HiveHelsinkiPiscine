/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutzig <hutzig@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:49:19 by hutzig            #+#    #+#             */
/*   Updated: 2024/03/03 15:42:39 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

int		main(int argc, char **argv);
int		ft_len(int nb);
int		ft_atoi(char *str);
int		*ft_split(int nb);
int		*ft_split2(int nb, int *nb_split, int i);
int		openfile(char *file, int nb_input);
void	convert(ssize_t reader, char *buffer, int nb_input);
int		ft_cmp(int nb, int *split, int i, char *buffer, int j);

#endif
