/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <mvallrib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:43:40 by mvallrib          #+#    #+#             */
/*   Updated: 2024/04/25 13:01:11 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet >= 'a' && alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}

/*
 int	main(void)
{
	ft_print_alphabet();
}
*/
