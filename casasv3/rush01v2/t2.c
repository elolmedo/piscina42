/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:14:19 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 14:52:08 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

void	control1(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE], int vleft[SIZE], 
		int row, int col)
{
	int	control;

	control = 4;

	if (vup[col] == 1)
	{	if (row == 0)
		{
			map[col][row][0] = row + control;
			//Delete rest of posibilitys
			map[col][row][1] = 1 << (row + 4) ;
		}

	}
	else if (vleft[row] == 1 )
	{
		if (col == 0)
		{
			map[col][row][0] = col + 4;
			map[col][row][1] = 1 << (col + 4);
		}
	}else
	{
		map[col][row][0] = 0;
                //Todos los valores disponibles
                map[col][row][1] = 0b1111;
	}
}
