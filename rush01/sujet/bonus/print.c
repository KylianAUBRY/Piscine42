/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:30:34 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/12 22:38:23 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_print_end(int l, char **argv, int **map, int c)
{
	ft_putchar(map[l][c] + '0');
	write(1, "--", 2);
	print_right(l, argv);
	ft_putchar('\n');
}

void	ft_print_space(int i, char **argv)
{
	if (i == 0)
	{
		ft_putchar('\n');
		write(1, "   | | | | \n", 13);
	}
	if (i == 1)
	{
		write(1, "   | | | | \n", 13);
		print_down(argv);
		ft_putchar('\n');
	}
}
