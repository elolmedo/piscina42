/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:09:27 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/03 11:32:36 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	response;

	index = 0;
	if (str[index] == '\0')
		response = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
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
//	char 	string[] = "EEE";
//	int	response;
//
//	response = ft_str_is_uppercase(string);
//	response = response+'0';
//	write(1, &response, 1);
//}
