/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:57:10 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/26 12:21:35 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_comb2(void);
void	ft_putnbr(int n);

int	main(void)
{
	ft_print_comb2();
}
*/

void	ft_putnbr(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = (n / 10) + 48;
		write(1, &c, 1);
		c = (n % 10) + 48;
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	n[2];

	n[0] = 0;
	while (n[0] < 99)
	{
		n[1] = n[0] + 1;
		while (n[1] < 100)
		{
			if (n[1] > n[0])
			{
				ft_putnbr(n[0]);
				write(1, " ", 1);
				ft_putnbr(n[1]);
				if (!(n[0] == 98 && n[1] == 99))
					write(1, ", ", 2);
			}
			n[1]++;
		}
		n[0]++;
	}
}
