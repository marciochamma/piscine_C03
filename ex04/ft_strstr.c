/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:07:36 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/18 11:50:24 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
			else if (str[i] != to_find[j])
				j = 0;
		}
		else
			i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str = "marcio";
// 	char	*to_find = "rc";

// 	printf("%s\n", strstr(str, to_find));
// 	printf("%s", ft_strstr(str, to_find));
// 	return (0);
// }
