/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:52:10 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/26 15:55:10 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(char *v, int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
		{
			write (1, &v[i], 1);
			i++;
		}
		return ;
	}
	while (i < size)
	{
		write(1, &v[i], 1);
		i++;
	}
	write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[9];
	char	v_max[9];
	int		flag;
	int		base;
	int		i;

	i = 0;
	while (i < n)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
		i++;
	}
	print_array (v, n, v_max[0]);
	while (v[0] != v_max[0])
	{
		flag = n - 1;
		while (v[flag] == v_max[flag])
			--flag;
		base = ++(v[flag]);
		while (flag < n)
			v[++flag] = ++base;
		print_array(v, n, v_max[0]);
	}
}
/*
int	main(void)
{
	ft_print_combn(4);
}
*/
