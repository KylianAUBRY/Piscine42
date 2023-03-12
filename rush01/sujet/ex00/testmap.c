/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:10:07 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/12 17:33:24 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	**memalloc(void)
{
	int	i;
	int	**matrice;

	i = 0;
	matrice = malloc(6 * sizeof(int *));
	while (i < 6)
	{
		matrice[i] = malloc(6 * sizeof(int));
		i++;
	}
	return (matrice);
}

void	print_map(int **map)
{
	int	c;
	int	l;

	c = 0;
	l = 0;
	while (l <= 3 && c <= 3)
	{
		while (c <= 2)
		{
			ft_putchar(map[l][c] + '0');
			ft_putchar(' ');
			c++;
		}
		if (c == 3)
		{
			ft_putchar(map[l][c] + '0');
			ft_putchar('\n');
			l++;
			c = 0;
		}
	}
}

void	ft_init_map(int **map)
{
	int	lin;
	int	col;

	lin = 0;
	col = 0;
	while (lin <= 3 && col <= 3)
	{
		while (col <= 3)
		{
			map[lin][col] = 1;
			col ++;
		}
		if (col == 4)
		{
			lin ++;
			col = 0;
		}
	}
}

int	main(int argc, char **argv)
{
	int	**map;
	int	i;

	if (argc == 2 && test_format(argv) == 1)
	{
		map = memalloc();
		ft_init_map(map);
		if (ft_backtracking(map, 0, 0, argv) == 1)
		{
			print_map(map);
		}
		else
			write(1, "Error\n", 6);
		i = -1;
		while (++i < 6)
			free(map[i]);
		free(map);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
