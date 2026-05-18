/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:26:48 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/02/02 11:26:52 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(14));
}
*/
int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	if (nb < 2)
		return (2);
	flag = 0;
	while (flag == 0)
	{
		flag = 1;
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
			{
				flag = 0;
				break ;
			}
			i++;
		}
		if (flag == 0)
			nb++;
	}
	return (nb);
}
