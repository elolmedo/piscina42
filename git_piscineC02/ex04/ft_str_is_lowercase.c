/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:09:27 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/03 11:31:14 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	response;

	index = 0;
	if (str[index] == '\0')
		response = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
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
//#include <unistd.h>
//int	main(void)
//{
//	char 	string[] = "eeEee";
//	int	response;
//
//	response = ft_str_is_lowercase(string);
//	response = response+'0';
//	write(1, &response, 1);
//}
