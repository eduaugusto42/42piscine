/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:24:45 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/26 19:58:43 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		hex_arr;
	char	*hex;
	char	n;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			write (1, &str[i], 1);
		else
		{
			write (1, "\\", 1);
			hex_arr = str[i] / 16;
			n = hex[hex_arr];
			write (1, &n, 1);
			hex_arr = str[i] % 16;
			n = hex[hex_arr];
			write (1, &n, 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Hello\nHow are you?");
}
*/
