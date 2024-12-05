/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:12:45 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 19:51:45 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	index;
	char	cadena[10];

	index = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		cadena[index] = (nb % 10) + '0';
		nb /= 10;
		index++;
	}
	while (index > 0)
	{
		index--;
		write(1, &cadena[index], 1);
	}
}
int	main(void)
{
	ft_putnbr(-42);
	return (0);
}
