/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:19:35 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/03 09:54:23 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
int	*ft_range(int min, int max);

int	main(void)
{
	#include <stdio.h>
	int	*result;
	int	i;

	i = 0;
	result = ft_range(-1, 2);
	while (i < 3)
	{
		printf("%d\n", result[i]);
		i++;
	}
	free (result);
}
*/

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	if (min >= max)
		return (0);
	range = 0;
	while (range < (max - min))
		range++;
	arr = malloc(range * sizeof(int));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
