/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:24:19 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/02 11:24:30 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%i\n", ft_recursive_factorial(10));
	printf("%i\n", ft_recursive_factorial(5));
	printf("%i\n", ft_recursive_factorial(0));
	printf("%i\n", ft_recursive_factorial(-10));
}
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
