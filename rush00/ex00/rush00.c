/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:04:33 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/18 17:11:55 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_first_row(int x);
void	ft_print_last_row(int x);

void	rush(int x, int y)
{
	int	i;

	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;
	i = y;
	if (y != 0)
		ft_print_first_row(x);
	write(1, "\n", 1);
	while (i > 2)
	{
		ft_print_last_row(x);
		write(1, "\n", 1);
		i--;
	}
	if (y >= 2)
		ft_print_first_row(x);
}

void	ft_print_first_row(int x)
{
	int	i;

	i = x;
	ft_putchar('o');
	while (i > 2)
	{
		ft_putchar('-');
		i--;
	}
	if (x >= 2)
		ft_putchar('o');
}

void	ft_print_last_row(int x)
{
	int	i;

	i = x;
	ft_putchar('|');
	while (i > 2)
	{
		ft_putchar(' ');
		i--;
	}
	if (x >= 2)
		ft_putchar('|');
}
