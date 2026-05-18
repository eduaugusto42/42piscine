/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:53:12 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/18 13:16:53 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 5;
	int b = 2;
	int div;
	int mod;

	printf("A -> %i\n", a);
	printf("B -> %i\n", b);
	
	ft_div_mod(a, b, &div, &mod);

	printf("div -> %i\n", div);
	printf("mod -> %i\n", mod);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
