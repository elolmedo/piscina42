/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:46:10 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/15 21:32:35 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative( int number )
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (number < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}

//int 	main(void)
//{
//
//	ft_is_negative(-1);
//	return (0);
//}
