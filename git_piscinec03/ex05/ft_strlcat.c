/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:16 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 15:44:18 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	index;
	int	counter_src;
	int	counter_dest;

	counter_dest = 0;
	counter_src = 0;
	index = 0;
	while (dest[counter_dest] != '\0' && counter_dest < size)
		counter_dest++;
	while (src[counter_src] != '\0')
		counter_src++;
	if (counter_dest >= size)
		return (size + counter_dest);
	while (src[index] != '\0' && (counter_dest + index) < (size - 1))
	{
		dest[counter_dest + index] = src[index];
		index++;
	}
	dest[counter_dest + index] = '\0';
	return (counter_dest + counter_src);
}
//#include <stdio.h>
//int main(void)
//{
//	char	name1[8] = "Hello";
//	char	name2[] = " World";
//
//	unsigned int dstsize = sizeof(name1);
//
//	unsigned int result = ft_strlcat(name1, name2, dstsize);
//
//	printf("Resultado: %s\n", name1);
//	printf("Longitud requerida: %u\n", result);
//	return (0);
//}
