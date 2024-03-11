/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:14:20 by abracurcix        #+#    #+#             */
/*   Updated: 2023/03/18 17:25:37 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

int	ft_count_size(char *str)
{
	unsigned int	str_size;

	str_size = 0;
	while (str[str_size] != '\0')
	{
		str_size++;
	}
	return (str_size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = ft_count_size(dest);
	src_size = ft_count_size(src);
	if (size <= dest_size)
		return (size + src_size);
	else
	{
		i = 0;
		while (src[i] != '\0' && i < size - dest_size - 1)
		{
			dest[dest_size + i] = src[i];
			i++;
		}
		dest[dest_size + i] = '\0';
		return (dest_size + src_size);
	}
}

// cc -Werror -Wextra -Wall ft_strlcat.c -lbsd && ./a.out

// int	main(void)
// {
// 	char			*dest = "aaaa";
// 	char			*src = "xyz";
// 	unsigned int	size;
// 	unsigned int	i;
// 	int				result;

// 	size = 3;
// 	printf("%ld\n", strlcat(dest, src, size));
// 	result = ft_strlcat(dest, src, size);
// 	i = 0;
// 	while (dest[i] != '\0')
// 	{
// 		write(1, &dest[i], 1);
// 		i++;
// 	}
// 	printf("\n%d", result);
// 	return (0);
// }
