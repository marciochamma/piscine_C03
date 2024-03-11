/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:48:47 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 18:09:51 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Marcio";
// 	s2 = "mArcio";
// 	printf("%d\n", strcmp(s1, s2));
// 	printf("%d", ft_strcmp(s1, s2));
// 	return (0);
// }

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main() {
	char *str0 = "";
	printf("std: %i, yours: %i\n", strcmp(str0, "a"), ft_strcmp(str0, "a"));

	char *str1 = (char *)"abcadef";
	char *str2 = (char *)"abcadef";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "abcadef";
	str2 = "abcad";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "abcad";
	str2 = "abcadtg";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));
}