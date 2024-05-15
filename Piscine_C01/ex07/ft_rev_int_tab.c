/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <mvallrib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:20:45 by mvallrib          #+#    #+#             */
/*   Updated: 2024/04/30 13:07:43 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	elem;

	i = 0;
	while (i < size / 2)
	{
		elem = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = elem;
		i++;
	}
}
