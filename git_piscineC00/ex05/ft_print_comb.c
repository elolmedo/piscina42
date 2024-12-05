/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:39:02 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/17 17:15:34 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb( char n1, char n2, char n3 )
{
	char	combo[4];

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			n3 = '0';
			while (n3 <= '9')
			{
				combo[0] = n1;
				combo[1] = n2;
				combo[2] = n3;
				if (n1 == '9' && n2 == '9' && n3 == '9')
					combo[3] = ' ';
				else
					combo[3] = ',';
				write(1, combo, 4);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb('0', '0', '0');
	return (0);
}
