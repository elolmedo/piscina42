/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:38:16 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 18:19:36 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define SIZE 4

void 	read_inputs(int input[4][SIZE], char *argv[],int  argc);
void	initiate_map(int map[SIZE][SIZE][SIZE + 1], int vup[SIZE], int  vleft[SIZE]);	
//void	play_strat1(vup[], vright[], vleft[], vdown[], map[][][]);	
void	print_table(int map[SIZE][SIZE][SIZE + 1]);
void	controlErrors(int vup[SIZE], int vdown[SIZE], int vleft[SIZE], int vright[SIZE]);

int	main(int argc, char *argv[])
{	
	int	input[4][SIZE];
	int	map[SIZE][SIZE][SIZE + 1];

	read_inputs(input, argv, argc);
	controlErrors(input[0], input[2], input[3], input[1]);
	initiate_map(map, input[0], input[3]);

	print_table(map);

	return (0);
}

