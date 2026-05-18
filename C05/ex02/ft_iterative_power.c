/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:24:46 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/02 11:24:54 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%i\n", ft_iterative_power(5, 3));	
	printf("%i\n", ft_iterative_power(2, 0));	
	printf("%i\n", ft_iterative_power(2, -1));
}
*/
int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
