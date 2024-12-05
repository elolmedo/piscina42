/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:35:31 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/20 14:43:24 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return (index);
}
//#include <stdio.h>
//int main(void)
//{
//	char string[] = "Raul";
//	int lenstring;
//
//	lenstring = ft_strlen(string);
//	printf("Number of caracters in string: %d",lenstring);
//
//
//}
