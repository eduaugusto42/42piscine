/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:47:54 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/26 10:55:07 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(char n[], int a);

void	ft_print_comb(void)
{
	char	n[5];

	n[0] = '0';
	n[3] = ',';
	n[4] = ' ';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				ft_write_comb(n, 5);
				n[2] = n[2] + 1;
			}
			n[1] = n[1] + 1;
		}
		n[0] = n[0] + 1;
	}
}

void	ft_write_comb(char n[], int a)
{
	int		i;

	i = 0;
	if (n[0] == '7' && n[1] == '8' && n[2] == '9')
	{
		while (i < 3)
		{
			write(1, &n[i], 1);
			i ++;
		}
	}
	else
	{
		while (i < a)
		{
			write(1, &n[i], 1);
			i++;
		}
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
