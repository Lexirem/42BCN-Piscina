/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <mvallrib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:33:37 by mvallrib          #+#    #+#             */
/*   Updated: 2024/04/28 14:12:53 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	write_b(int width, int height, int x, int y)
{
	if ((x > 1 && x < width) && (y == 1 || y == height))
	{
		ft_putchar('B');
	}
	else if ((y > 1 && y < height) && (x == 1 || x == width))
	{
		ft_putchar('B');
	}
	else if ((y != height || y != 1) || (x != width || x != 1))
	{
		ft_putchar(' ');
	}
	return (x);
}

void	print_chars(int width, int height)
{
	int	x;
	int	y;

	y = 1;
	while (y <= height)
	{
		x = 1;
		while (x <= width)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == height))
				ft_putchar('A');
			else if ((x == width && y == 1) || (x == width && y == height))
				ft_putchar('C');
			else
				write_b(width, height, x, y);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	rush(int width, int height)
{
	int	max_int;

	max_int = 2147483647;
	if ((width > 0 && width < max_int) && (height > 0 && height < max_int))
		print_chars(width, height);
	else
	{
		write(1, "Please introduce a valid input!\n", 32);
	}
}
