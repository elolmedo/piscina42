/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_inputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaballe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:17:30 by pcaballe          #+#    #+#             */
/*   Updated: 2024/11/24 17:19:21 by pcaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4

void	fill_input(int input[4][SIZE], int len, char *argument);

void	read_inputs(int input[4][SIZE], char *argv[], int argc)
{
	int		len;
	char	*argument;

	if (argc != 2)
		write(1, "Error en los argumentos\n", 23);
	argument = argv[1];
	len = 0;
	while (argument[len] != '\0')
		len++;
	if (len != SIZE * 4 * 2 - 1)
		write(1, "Argument in wrong format - msg1", 31);
	fill_input(input, len, argument);
}

void	fill_input(int input[4][SIZE], int len, char *argument)
{
	int	cont_arg;
	int	cont_views;
	int	side;

	cont_arg = 0;
	cont_views = 0;
	side = 0;
	while (cont_arg < len && cont_views < SIZE)
	{
		if (argument[cont_arg] >= '0' && argument[cont_arg] <= '9')
		{
			input[side][cont_views] = argument[cont_arg] - '0';
			cont_views++;
		}
		cont_arg++;
		if (cont_views == SIZE)
		{
			side++;
			cont_views = 0;
		}
	}
}
