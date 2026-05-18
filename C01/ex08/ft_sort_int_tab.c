/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:41:09 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/18 18:12:04 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];

	printf("Before: ");
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 100;
		printf("%i ", tab[i]);
	}
	ft_sort_int_tab(tab, 10);
	printf("\nAfter: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%i ", tab[i]);
	}
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	changes;

	changes = 0;
	while (changes == 0)
	{
		changes = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				changes = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
