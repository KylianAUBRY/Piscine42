/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:15:13 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/02 16:25:24 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	if (a < b && b < c)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a != '7')
			write (1, &", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a != '7' || b != '8' || c != '9')
	{
		c ++;
		if (c > '9')
		{
			c = '0';
			b ++;
		}
		if (b > '9')
		{
			b = '0';
			a ++;
		}
		ft_putchar(a, b, c);
	}
}
