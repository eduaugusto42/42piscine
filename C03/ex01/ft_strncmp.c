/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:10:47 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/29 11:26:51 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "Hello, 42!";
	char	*s2 = "Hello, world!";

	printf("%i, %i, %i\n", ft_strncmp(s1, s1, 10), 
	ft_strncmp(s1, s2, 10), ft_strncmp(s1, s2, 7));
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1
		&& s1[i] != '\0'
		&& s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
