/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:28:11 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/26 19:09:43 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Hello, 42!";
	char	dest[] = "!24 ,olleH";

	ft_strlcpy(dest, src, 10);

	printf("Source: ");
	for(int i = 0; src[i] != '\0'; i++)
		printf("%c", src[i]);

	printf("\nDestiny: ");
	for(int j = 0; dest[j] != '\0'; j++)
		printf("%c", dest[j]);
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
