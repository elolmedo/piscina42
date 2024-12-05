/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t3.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:56:06 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 16:27:46 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

void	control3(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE], int vleft[SIZE], 
		int row, int col)
{
	int	control;

	control = 3;

	if (vup[col] == 3)
	{	if (row == 3)
		{
			map[col][row - 1][0] = row + 1;
			//Delete rest of posibilitys
			map[col][row][1] = 1 << (control) ;
		}else if (map[col][0][0] == 2 )
			map[col][1][0] = 3;
		
		
	}
	else if (vleft[row] == 3 )
	{
		if (col == 3)
		{
			map[col - 1][row][0] = col + 1;
			map[col][row][1] = 1 << (control);
		}
	}
	else
	{
		map[col][row][0] = 0;
                //Todos los valores disponibles
                map[col][row][1] = 0b1111;
	}
}

