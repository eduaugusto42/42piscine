/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:01:03 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/29 11:22:10 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[42] = "Hello, ";
	char	src[] = "World!";

	ft_strlcat(dest, src, 42);
	printf("%s\n", dest);
}
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;
	unsigned int	dlen;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dest[dlen] != '\0' && dlen < size)
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (dlen == size)
		return (dlen + slen);
	while (src[i] != '\0' && (dlen + i) < (size - 1))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dest[dlen + i] = '\0';
	return (dlen + slen);
}
