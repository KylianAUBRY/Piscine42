/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:21:18 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/12 22:40:17 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_top(char **argv)
{
	int	*l_up;

	l_up = malloc(4 * sizeof(int) + 1);
	ft_init_l_up(argv, l_up);
	write(1, "   ", 4);
	ft_putchar(l_up[0] + '0');
	ft_putchar(' ');
	ft_putchar(l_up[1] + '0');
	ft_putchar(' ');
	ft_putchar(l_up[2] + '0');
	ft_putchar(' ');
	ft_putchar(l_up[3] + '0');
}

void	print_down(char **argv)
{
	int	*l_down;

	l_down = malloc(4 * sizeof(int) + 1);
	ft_init_l_down(argv, l_down);
	write(1, "   ", 4);
	ft_putchar(l_down[0] + '0');
	ft_putchar(' ');
	ft_putchar(l_down[1] + '0');
	ft_putchar(' ');
	ft_putchar(l_down[2] + '0');
	ft_putchar(' ');
	ft_putchar(l_down[3] + '0');
}

void	print_right(int c, char **argv)
{
	int	*c_right;

	c_right = malloc(4 * sizeof(int) + 1);
	ft_init_c_right(argv, c_right);
	ft_putchar(c_right[c] + '0');
}

void	print_left(int c, char **argv)
{
	int	*c_left;

	c_left = malloc(4 * sizeof(int) + 1);
	ft_init_c_left(argv, c_left);
	ft_putchar(c_left[c] + '0');
}

void	print_map(int **map, char **argv)
{
	int	c;
	int	l;

	c = 0;
	l = 0;
	print_top(argv);
	ft_print_space(0, argv);
	while (l <= 3 && c <= 3)
	{
		print_left(l, argv);
		write(1, "--", 2);
		while (c <= 2)
		{
			ft_putchar(map[l][c] + '0');
			ft_putchar(' ');
			c++;
		}
		if (c == 3)
		{
			ft_print_end(l, argv, map, c);
			l++;
			c = 0;
		}
	}
	ft_print_space(1, argv);
}
