/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:18:18 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/12/03 19:27:14 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum_n1(char *s1)
{
	int	sum_n1;
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		sum_n1 += s1[index];
		index++;
	}
	s1[index] = '\0';
	return (sum_n1);
}

int	sum_n2(char *s2)
{
	int	sum_n2;
	int	index;

	index = 0;
	while (s2[index] != '\0')
	{
		sum_n2 += s2[index];
		index++;
	}
	s2[index] = '\0';
	return (sum_n2);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	sum_s1;
	int	sum_s2;
	int	response;

	sum_s1 = 0;
	sum_s2 = 0;
	sum_s1 = sum_n1(s1);
	sum_s2 = sum_n2(s2);
	if (sum_s1 == sum_s2)
		response = 0;
	if (sum_s1 > sum_s2)
		response = sum_s1 - sum_s2;
	if (sum_s1 < sum_s2)
		response = sum_s1 - sum_s2;
	return (response);
}
//#include <stdio.h>
//int main(void)
//{
//	char 	s1[] = "ABC";
//	char	s2[] = "ABC";
// 	int	response;
//	int	index;
//
//	response = ft_strcmp(s1, s2);
//
//	printf("Resultado: %d", response);
//
//	return(0);
//
//
//}
//
