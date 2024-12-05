/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:10:37 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/04 19:48:34 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	res;

	sign = 1;
	index = 0;
	res = 0;
	while (str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
	{
		index++;
	}
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		res = res * 10 + (str[index] - '0');
		index++;
	}
	return (res * sign);
}
//#include <stdio.h>
//int	main(void)
//{
//	char	test1[] = "   -1234abc";   // Debe devolver -1234
//	char	test2[] = "   5678  ";    // Debe devolver 5678
//	char	test3[] = "--123";        // Debe devolver 0 (inválido)
//	char	test4[] = "+42";          // Debe devolver 42
//	char	test5[] = "   \t\n  89";  // Debe devolver 89
//
//	printf("Resultado 1: %d\n", ft_atoi(test1));
//	printf("Resultado 2: %d\n", ft_atoi(test2));
//	printf("Resultado 3: %d\n", ft_atoi(test3));
//	printf("Resultado 4: %d\n", ft_atoi(test4));
//	printf("Resultado 5: %d\n", ft_atoi(test5));
//
//	return (0);
//}
