/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:28:11 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/19 13:44:04 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Hello, 42!";
	char	dest[] = "!24 ,olleH";

	ft_strcpy(dest, src);

	printf("Source: ");
	for(int i = 0; src[i] != '\0'; i++)
		printf("%c", src[i]);

	printf("\nDestiny: ");
	for(int j = 0; dest[j] != '\0'; j++)
		printf("%c", dest[j]);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
