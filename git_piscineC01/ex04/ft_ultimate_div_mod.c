/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:48:20 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/20 13:31:01 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

//#include <stdio.h>
//int	main(void)
//{
//	int num1;
//	int num2;
//
//	num1 = 10;
//	num2 = 2;
//
//
//
//	ft_ultimate_div_mod(&num1, &num2);
//	printf("division: %d. Resto: %d",num1, num2);
//	return (0);
//}
