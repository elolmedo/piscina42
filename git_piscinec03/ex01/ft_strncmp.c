/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:36:43 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/03 19:59:27 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum_n1(char *s1, unsigned int n)
{
	int	sum_n1;

	sum_n1 = 0;
	while (s1[n] != '\0')
	{
		sum_n1 += s1[n];
		n++;
	}
	s1[n] = '\0';
	return (sum_n1);
}

int	sum_n2(char *s2, unsigned int n)
{
	int	sum_n2;

	sum_n2 = 0;
	while (s2[n] != '\0')
	{
		sum_n2 += s2[n];
		n++;
	}
	s2[n] = '\0';
	return (sum_n2);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	sum1;
	int	sum2;
	int	response;

	sum1 = 0;
	sum2 = 0;
	sum1 = sum_n1(s1, n);
	sum2 = sum_n2(s2, n);
	if (sum1 == sum2)
		response = 0;
	if (sum1 > sum2 || sum1 < sum2)
		response = sum1 - sum2;
	return (response);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	str1[] = "ABC";
//	char	str2[] = "ABJ";
//	int	response;
//
//	response = ft_strncmp(str1, str2, 0);
//	printf("Resultado: %d",response);
//	return (0);
//
//}
