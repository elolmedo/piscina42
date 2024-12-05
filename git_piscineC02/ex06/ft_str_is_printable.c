/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:33:33 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/03 12:45:00 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;
	int	response;

	index = 0;
	if (str[index] == '\0')
		response = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 0 && str[index] <= 31) || str[index] == 127)
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
