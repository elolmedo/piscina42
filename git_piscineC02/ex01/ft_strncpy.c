/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:02:23 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/21 19:25:44 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}

//int main(void)
//{
//	char orig[] = "Raul";
//	char dest[sizeof(orig)];
//
//	ft_strncpy(dest, orig, 0);
//
//	return (0);
//}
