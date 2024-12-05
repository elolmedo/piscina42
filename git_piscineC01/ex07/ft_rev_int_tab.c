/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:47:38 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/21 17:27:33 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	array[size];
	int	index;
	int	aux;
	int	aux2;
	int	aux3;

	aux = 0;
	index = *tab;
	while (aux <= size)
	{
		array[aux] = index;
		index++;
		aux++;
	}
	aux = 0;
	aux2 = size;
	while (aux <= size)
	{
		aux3 = array[aux2];
		array[aux] = aux3;
		aux++;
		aux2--;
	}
}
//int main(void)
//{
//	int	tabu;
//	tabu = 4;
//
//	int	size;
//	size = 8;
//		
//	ft_rev_int_tab(&tabu, size);
//	return (0);
//}
