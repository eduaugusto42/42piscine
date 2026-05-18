/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:10:47 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/29 11:06:26 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "Hello, 42!";
	char	*s2 = "Hello, world!";

	printf("%i, %i\n", ft_strcmp(s1, s1), ft_strcmp(s1, s2));
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
