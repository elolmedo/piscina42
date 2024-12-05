/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:13:26 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/20 11:34:54 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	change;

	*a = 5;
	*b = 100;
	change = *a;
	*a = *b;
	*b = change;
}
//#include <stdio.h>
//int main(void){
//
//	int num1;
//	int num2;
//
//	ft_swap(&num1, &num2);
//	printf("num1: %d y num2: %d", num1, num2);
//	return (0);
//}
