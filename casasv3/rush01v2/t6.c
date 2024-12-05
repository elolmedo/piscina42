/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t6.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:30:26 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 16:57:40 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

void	insert3(int map[SIZE][SIZE][SIZE + 1], int row, int col)
{
	int	control;
	control = 1;

	if (map[col][row][0] == 2)	
		map[col+1][row][0] = 3;
	else if (map[col][0][0] == 2)	
		map[col][1][0] = 3;
	else if (map[col][1][0] == 2)	
		map[col][2][0] = 3;
	else if (map[col][2][0] == 2)	
		map[col][3][0] = 3;
}
