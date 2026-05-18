/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:49:23 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/18 13:46:01 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int	tab[11];

	printf("Before: ");
	for (int i = 0; i <= 10; i++)
	{
		tab[i] = i;
		printf("%i ", tab[i]);
	}

	ft_rev_int_tab(tab, 11);
	printf("\nAfter: ");
	for (int j = 0; j <= 10; j++)
	{
		printf("%i ", tab[j]);
	}
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
