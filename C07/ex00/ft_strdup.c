/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:35:16 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/05 10:47:18 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str = "Hello, 42!";
	char	*dup = ft_strdup(str);
	printf("%s\n", dup);
	free (dup);
}
*/
char	*ft_strdup(char *src)
{
	char	*dup;
	int		slen;
	int		i;

	slen = 0;
	while (src[slen] != '\0')
		slen++;
	dup = malloc ((slen + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
