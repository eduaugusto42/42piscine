/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:25:17 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/02 11:25:21 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%i\n", ft_recursive_power(2, 5));	
	printf("%i\n", ft_recursive_power(3, 4));	
	printf("%i\n", ft_recursive_power(4, 3));	
	printf("%i\n", ft_recursive_power(2, 0));	
	printf("%i\n", ft_recursive_power(2, -1));
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
