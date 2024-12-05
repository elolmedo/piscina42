/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:33:47 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/20 11:47:15 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//#include <stdio.h>
//int main(void)
//{
//	int num1;
//	int num2;
//	int mod;
//	int div;
//
////	num1 = 10;
//	num2 = 2;
//
//	ft_div_mod(num1, num2, &div, &mod);
//
//	printf("Result division: %d. Mod of division: %d", div, mod);
//}
