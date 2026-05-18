/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:54:29 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/19 21:55:43 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int     ft_str_is_uppercase(char *str);

int main(void)
{
        char    *str0 = "HelloWorld";
        char    *str1 = "HELLOWORLD";

        printf("%i, %i\n", ft_str_is_uppercase(str0), ft_str_is_uppercase(str1));
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
