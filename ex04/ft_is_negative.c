/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:29:51 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/26 10:54:26 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
		write(1, &neg, 1);
	else
		write(1, &pos, 1);
}
/*
int main()
{
	ft_is_negative(-1);
	ft_is_negative(-99);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(99);
}
*/
