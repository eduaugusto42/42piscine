/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:31:16 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/19 21:45:57 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int     ft_str_is_lowercase(char *str);

int main(void)
{
        char    *str0 = "HelloWorld";
        char    *str1 = "helloworld";

        printf("%i, %i\n", ft_str_is_lowercase(str0), ft_str_is_lowercase(str1));
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
