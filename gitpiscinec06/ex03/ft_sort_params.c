/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:53:39 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/05 14:53:21 by rolmedo-         ###   ########.fr       */
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

void	sort_params(char **argv, int argc)
{
	int	index;
	int	counter;
	char	*temp;

	index = 1;
	counter = 1;
	while (index < argc)
	{
		while (counter < argc - index)
		{
			if (*argv[counter] > *argv[counter + 1]){
				temp = argv[counter];
				argv[counter] = argv[counter + 1];
				argv[counter + 1] = temp;
			}
			counter++;
		}
		counter = 1;
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int	index;

	index = 1;
	if (argc > 1)
	{
		sort_params(argv, argc);
		while (index < argc){
			put_string(argv[index]);
			index++;
		}
	}
}


