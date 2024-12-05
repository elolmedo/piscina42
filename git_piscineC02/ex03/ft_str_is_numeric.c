/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:43:33 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/03 10:59:48 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	response;

	index = 0;
	if (str[index] == '\0')
		response = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 48 && str[index] <= 57)
			response = 1;
		else
		{
			response = 0;
			break ;
		}
		index++;
	}
	str[index] = '\0';
	return (response);
}
#include <stdio.h>
int main(void)
{
	char	string[] = "3a3";
	int	response;

	response = ft_str_is_numeric(string);

	printf("numero; %d", response);
}
