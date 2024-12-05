/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:16 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 12:45:14 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	max_dest;

	max_dest = 0;
	while (dest[max_dest] != '\0')
		max_dest++;

	while (src[nb] != '\0')
	{
		dest[max_dest + nb] = src[nb];
		nb++;
	}
	dest[max_dest + nb] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char	name1[100] = "PAUL";
//	char	name2[] = "Pepe";
//	
//
//	ft_strncat(name1, name2, 0);
//	printf("Nuevo string: %s", name1);
//}
