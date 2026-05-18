/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:23:49 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/02 11:24:10 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(10));
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(4));
	printf("%i\n", ft_iterative_factorial(3));
}
*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
