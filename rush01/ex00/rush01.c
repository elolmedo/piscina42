/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:28:04 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/17 14:56:47 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	hor;
	int	ver;

	ver = 1;
	hor = 1;
	while (ver <= y)
	{
		while (hor <= x)
		{
			if (ver == 1 && hor == 1)
				ft_putchar('/');
			else if ((hor == x && ver == 1) || (ver == y && hor == 1))
				ft_putchar('\\');
			else if (ver > 1 && hor > 1 && ver != y && hor != x)
				ft_putchar(' ');
			else if (ver == y && hor == x)
				ft_putchar('/');
			else
				ft_putchar('*');
			hor++;
		}
		ft_putchar('\n');
		hor = 1;
		ver++;
	}
}
