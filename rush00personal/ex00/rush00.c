/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:35:06 by jkarhu            #+#    #+#             */
/*   Updated: 2024/02/18 13:41:29 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	middle(int y = 4, int final_x = 2, int original_x = 2)
{
	while (y > 2)
	{
		ft_putchar('\n');
		ft_putchar('|');
		y--;
		final_x--;
		while (final_x > 1)
		{
			ft_putchar(' ');
			final_x--;
			if (final_x == 1)
			{
				ft_putchar('|');
				final_x = original_x;
				break ;
			}
		}
	}
}

int	start_end(int x, int x_count, int final_x)
{
	while (x > 0)
	{
		if (x_count == 0 || x_count == final_x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		x--;
		x_count++;
	}
}

int	rush(int x, int y)
{
	int	x_count;
	int	final_x;
	int	original_x;

	x_count = 0;
	final_x = x;
	original_x = final_x;
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	else
	{
		start_end(x, x_count, final_x);
		middle(y, final_x, original_x);
		final_x = original_x;
		if (y != 1)
		{
			ft_putchar('\n');
			start_end(x, x_count, final_x);
		}
	}
}
