/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:48:12 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 14:30:43 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	posfi;

	if (to_find[0] == '\0')
		return (str);
	index = 0;
	while (str[index] != '\0')
	{
		posfi = 0;
		while (str[index + posfi] == to_find[posfi] && to_find[posfi] != '\0')
		{
			posfi++;
		}
		if (to_find[posfi] == '\0')
			return (&str[index]);
		index++;
	}
	return (NULL);
}
//#include <stdio.h>
//int	main(void)
//{
//	char	name[] = "hello wolrd";
//	char	subname[] = "wo";
//	char	*result;
//
//	result = ft_strstr(name, subname);
//	if (result)
//		printf("Coincidiencia; %s",result);
//	else
//		printf("Subcadena no encontrada.\n");
//	return (0);
//}
