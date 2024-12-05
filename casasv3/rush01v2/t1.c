/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:14:19 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 14:27:19 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

void	control4(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE], int vleft[SIZE], 
		int row, int col)
{
	if (vup[col] == 4)
	{	
		map[col][row][0] = row + 1;
		//Delete rest of posibilitys
		map[col][row][1] = 1 << row ;

	}
	else if (vleft[row] == 4)
	{
		map[col][row][0] = col + 1;
		map[col][row][1] = 1 << (col + 1);
	}else
	{
		map[col][row][0] = 0;
                //Todos los valores disponibles
                map[col][row][1] = 0b1111;
	}
}
