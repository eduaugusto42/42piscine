/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:31:12 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/18 13:26:31 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a = 5;
	int b = 2;

	printf("A -> %i\n", a);
	printf("B -> %i\n\n\n", b);
	
	ft_ultimate_div_mod(&a, &b);

	printf("A -> %i\n", a);
	printf("B -> %i\n", b);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
