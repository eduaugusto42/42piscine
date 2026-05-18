/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:56:57 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/15 17:11:59 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a = 2;
	int b = 4;

	printf("%i%i\n", a, b);
	ft_swap(&a, &b);
	printf("%i%i\n", a, b);
}
*/
void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
