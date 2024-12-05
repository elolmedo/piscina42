/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:16 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 12:40:21 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	max_dest;

	max_dest = 0;
	while (dest[max_dest] != '\0')
		max_dest++;
	index = 0;
	while (src[index] != '\0')
	{
		dest[max_dest + index] = src[index];
		index++;
	}
	dest[max_dest + index] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char	name1[100] = "PAUL";
//	char	name2[] = "Pepe";
//	
//
//	ft_strcat(name1, name2);
//	printf("Nuevo string: %s", name1);
//}
