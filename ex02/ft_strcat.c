/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 07:34:02 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 18:19:05 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = " o campeao dos campeoes!";
	char	dest[50];
	int		i;

	// src[0] = 'c';
	// src[1] = 'i';
	// src[2] = 'o';
	// src[3] = '\0';
	dest[0] = 'm';
	dest[1] = 'a';
	dest[2] = 'r';
	dest[3] = '\0';
	// printf("original = %s\n", strcat(dest, src));
	ft_strcat(dest, src);
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
