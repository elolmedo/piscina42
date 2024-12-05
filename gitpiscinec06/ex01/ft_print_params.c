/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:24:08 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 20:43:15 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_string(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
	write(1, &"\n", 1);
}

int	main(int argc, char *argv[])
{
	int	max_params;
	int	index;

	index = 0;
	while (index < argc)
	{
		put_string(argv[index]);
		index++;
	}
	return (0);
}
