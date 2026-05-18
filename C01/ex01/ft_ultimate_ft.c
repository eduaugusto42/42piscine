/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:26:08 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/15 16:31:20 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int i = 1;
	int *p1 = &i;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	printf("Before: %i\n", i);
	ft_ultimate_ft(p9);
	printf("After: %i\n", i);
}
*/
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
