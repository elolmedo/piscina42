/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:46:26 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/03 18:15:37 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] = str[index] - 32 ;
		index++;
	}
	str[index] = '\0';
	return (str);
}
//int	main(void)
//{
//	char	name[] = "pepe";
//	int	index;
//
//	ft_strupcase(name);	
//	index = 0;
//	while (name[index] != '\0')
//	{
//		write(1, &name[index], 1);
//		index++;
//	}
//	return (0);
//}
