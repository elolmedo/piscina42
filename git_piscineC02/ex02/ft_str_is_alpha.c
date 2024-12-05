/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:27:16 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/22 12:42:46 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	response;

	index = 0;
	if (str[0] == '\0')
		response = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= 65 && str[index] <= 90)
			|| (str[index] >= 97 && str[index] <= 122))
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
//#include <stdio.h>
//int main(void)
//{
//	char string[] = "";
//	int response;
//
//	response = ft_str_is_alpha(string);
//	printf("Numero %d", response);
//	return (0);
//}
