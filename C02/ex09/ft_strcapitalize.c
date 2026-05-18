/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 18:35:25 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/27 15:00:59 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strcapitalize(char *str);
char    *ft_strlowcase(char *str);
int	ft_str_is_alpha_num(char c);

int	main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	
	printf("%s\n", ft_strcapitalize(str));
}	
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_str_is_alpha_num(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ft_str_is_alpha_num(str[i - 1]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
