/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <mvallrib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:16:27 by mvallrib          #+#    #+#             */
/*   Updated: 2024/05/13 13:20:06 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	index;
	int	base;

	base = nb;
	if (base <= 0)
		return (0);
	if (base == 1)
		return (1);
	index = 2;
	if (base >= 2)
	{
		while (index * index <= base)
		{
			index++;
			if (index * index == base)
				return (index);
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(7));
	printf("%d\n", ft_sqrt(36));
}*/
