/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:50:05 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/19 21:05:40 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char	*str0 = "HelloWorld";
	char	*str1 = "Hello, 42!";

	printf("%i, %i\n", ft_str_is_alpha(str0), ft_str_is_alpha(str1));
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 122 || str[i] < 65 || (str[i] >= 91 && str[i] <= 96))
			return (0);
		i++;
	}
	return (1);
}
