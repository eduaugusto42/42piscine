/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:31:16 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/19 22:00:43 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int     ft_str_is_printable(char *str);

int main(void)
{
        char    *str0 = "HelloWorld";
        char    *str1 = "HELLOWORLD";

        printf("%i, %i\n", ft_str_is_printable(str0), ft_str_is_printable(str1));
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
