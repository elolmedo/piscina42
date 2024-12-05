/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:00:21 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 16:05:42 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

//#include <stdio.h>
//int	main(void)
//{
//	int lencadena;
//	char cadena[] = "pepe";
//
//	lencadena = ft_strlen(cadena);
//	printf("Resultado: %d", lencadena);
//	return (0);
//
//}
