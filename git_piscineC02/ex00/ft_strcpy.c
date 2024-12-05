/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolmedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:28:50 by rolmedo-          #+#    #+#             */
/*   Updated: 2024/11/24 18:03:16 by rolmedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
//int main(void){
//
//	char	orig[] = "Raul";
//	char	dest[sizeof(orig)];
//
//	ft_strcpy(dest, orig);
//
//	return (0);
//	
//}
