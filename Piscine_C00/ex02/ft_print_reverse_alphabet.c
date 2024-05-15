/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <mvallrib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:05:32 by mvallrib          #+#    #+#             */
/*   Updated: 2024/04/25 13:15:46 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet <= 'z' && alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
