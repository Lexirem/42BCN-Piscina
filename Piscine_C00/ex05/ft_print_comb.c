/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <mvallrib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:20:54 by mvallrib          #+#    #+#             */
/*   Updated: 2024/04/27 11:01:56 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_character(char c)
{
	write(1, &c, 1);
}

void	print_combination(char c, char d, char u)
{
	print_character(c + '0');
	print_character(d + '0');
	print_character(u + '0');
	if (c == 7 && d == 8 && u == 9)
	{
		return ;
	}
	print_character(',');
	print_character(' ');
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				print_combination(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
