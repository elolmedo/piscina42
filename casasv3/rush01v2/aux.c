/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:38:42 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 18:26:43 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	n = n+'0';
	write(1, &n, 1);
}

void	print_table(int map[SIZE][SIZE][SIZE + 1])
{
	int	col;
	int	row;
	int	opc;

	col = 0;

	while(col < SIZE)
	{
		row = 0;
		while (row < SIZE)
		{
			opc = 0;
			while (opc <= 0)
			{
				ft_putint(map[col][row][opc]);
				opc++;
			}
			row++;

		}
		ft_putchar('\n');
		col++;
	}
}

void	controlErrors(int vup[SIZE], int vdown[SIZE], int vleft[SIZE], int vright[SIZE])
{
	
	int	control;

	control = 0;
	
	if ((vup[control] == 4) && vdown[control] != 1)
	{
		write(1, "Error columa arriba con 4 abajo sin 1", 39);
		return (1);
	}
	if ((vleft[control] == 4) && vright[control] != 1)
	{
		write(1, "Error fila izq con 4 derecha sin 1", 36);	
		return (1);
	}
}
