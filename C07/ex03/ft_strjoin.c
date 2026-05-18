/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:33:53 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/04 15:26:18 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strcat(char *src, char *dest);
int		ft_strlen(char *str);
/*
int	main(void)
{
	#include <stdio.h>

	char	*str1 = "Hello,";
	char	*str2 = "42!";
	char	*str3 = "I'm";
	char	*str4 = "Edwa";
	char	*strs[] = {str1, str2, str3, str4};

	printf ("%s\n", ft_strjoin(4, strs, " "));
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		size_str;

	i = 0;
	size_str = 0;
	while (i < size)
		size_str += ft_strlen(strs[i++]);
	if (size == 0)
		str = malloc(1);
	else
		str = malloc ((size_str + ft_strlen(sep)) * (size - 1) + 1);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		str = ft_strcat(strs[i++], str);
		if (i < size)
			str = ft_strcat(sep, str);
	}
	return (str);
}

char	*ft_strcat(char *src, char *dest)
{
	int	d_size;
	int	i;

	d_size = 0;
	i = 0;
	while (dest[d_size] != '\0')
		d_size++;
	while (src[i] != '\0')
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
