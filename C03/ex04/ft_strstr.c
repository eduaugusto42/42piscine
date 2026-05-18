/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:10:40 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/29 11:24:18 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
int	ft_strlen(char *str);

int	main(void)
{
	char	haystack[] = "This is a texas test to find the text. Can it be found?";
	char	*needle = "test";
	char	*result = ft_strstr(haystack, needle);

	if (result != 0)
		printf("Found '%s' at position: %s\n", needle, result);
	else
		printf("'%s' not found\n", needle);
}
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0'
			&& to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
