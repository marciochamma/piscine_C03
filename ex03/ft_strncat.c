/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:29:50 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/18 11:54:20 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char			src[5];
// 	char			dest[10];
// 	int				i;
// 	unsigned int	nb;

// 	src[0] = 'c';
// 	src[1] = 'i';
// 	src[2] = 'o';
// 	src[3] = '\0';
// 	dest[0] = 'm';
// 	dest[1] = 'a';
// 	dest[2] = 'r';
// 	dest[3] = '\0';
// 	nb = 3;
// 	printf("original = %s\n", strncat(dest, src, nb));
// 	ft_strncat(dest, src, nb);
// 	i = 0;
// 	while (dest[i] != '\0')
// 	{
// 		write(1, &dest[i], 1);
// 		i++;
// 	}
// 	return (0);
// }
