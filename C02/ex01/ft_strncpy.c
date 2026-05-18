/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:41:32 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/27 17:33:28 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int     main(void)
{
        char    src[] = "Hello, 42!";
        char    dest[] = "!24 ,olleH";

        ft_strncpy(dest, src, 10);

        printf("Source: ");
        for(int i = 0; src[i] != '\0'; i++)
                printf("%c", src[i]);

	printf("\nDestiny: ");
	for(int j = 0; dest[j] != '\0'; j++)
                printf("%c", dest[j]);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
