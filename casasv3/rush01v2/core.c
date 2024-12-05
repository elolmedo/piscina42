/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:38:42 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 17:50:47 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

void	control4(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE],
			int vleft[SIZE], int row, int col);
void	control1(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE],
			int vleft[SIZE], int row, int col);
void	control3(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE], int vleft[SIZE],
		int row, int col);
void	insert1(int map[SIZE][SIZE][SIZE + 1], int row, int col);
void	insert2(int map[SIZE][SIZE][SIZE + 1], int row, int col);
void	insert3(int map[SIZE][SIZE][SIZE + 1], int row, int col);

void	initiate_map(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE], int vleft[SIZE])
{
	int	row, col, opc;

	row = 0;
	col = 0;
	opc = 0;

	while (vup[col] <= SIZE)
	{
		row = 0;
		while(vleft[row] <= SIZE)
		{
			//Init array 3d possibility
			//Todas las celdas pueden ser 1, 2, 3, 4
			map[col][row][1] = 0b1111;
			//Aplication rules by views
			control4(map, vup, vleft, row, col);
			if (vup[col] == 1 || vleft[row] == 1)
				control1(map, vup, vleft, row, col);
			if (vup[col] == 3 || vleft[row] == 3)
				control3(map, vup, vleft, row, col);
			//Insert specific values from additional rules
			insert1(map, col, row);
			insert2(map, col, row);
			insert3(map, col, row);	
			row++;
		}
		col++;	
	}
}
