/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <mvallrib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:26:42 by mvallrib          #+#    #+#             */
/*   Updated: 2024/05/14 11:27:21 by mvallrib         ###   ########.fr       */
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
			if (index * index == base)
				return (index);
			index++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(7));
	printf("%d\n", ft_sqrt(36));
}*/
