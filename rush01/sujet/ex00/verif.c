/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:10:36 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/12 20:16:36 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	verif_left(int **map, int lin, int col, char **argv)
{	
	int	*c_left;

	c_left = malloc(4 * sizeof(int) + 1);
	ft_init_c_left(argv, c_left);
	if (c_left[lin] == 4 && map[lin][col] != 1)
		return (0);
	if (c_left[lin] == 1 && map[lin][col] != 4)
		return (0);
	if (c_left[lin] == 2 && map[lin][col] == 4)
		return (0);
	if (c_left[lin] == 3 && map[lin][col] == 4)
		return (0);
	return (1);
}

int	verif_right(int **map, int lin, int col, char **argv)
{
	int	*c_right;

	c_right = malloc(4 * sizeof(int) + 1);
	ft_init_c_right(argv, c_right);
	if (c_right[lin] == 4 && map[lin][col] != 1)
		return (0);
	if (c_right[lin] == 1 && map[lin][col] != 4)
		return (0);
	if (c_right[lin] == 2 && map[lin][col] == 4)
		return (0);
	if (c_right[lin] == 3 && map[lin][col] == 4)
		return (0);
	return (1);
}

int	verif_up(int **map, int lin, int col, char **argv)
{
	int	*l_up;

	l_up = malloc(4 * sizeof(int) + 1);
	ft_init_l_up(argv, l_up);
	if (l_up[col] == 4 && map[lin][col] != 1)
		return (0);
	if (l_up[col] == 1 && map[lin][col] != 4)
		return (0);
	if (l_up[col] == 2 && map[lin][col] == 4)
		return (0);
	if (l_up[col] == 3 && map[lin][col] == 4)
		return (0);
	return (1);
}

int	verif_down(int **map, int lin, int col, char **argv)
{
	int	*l_down;

	l_down = malloc(4 * sizeof(int) + 1);
	ft_init_l_down(argv, l_down);
	if (l_down[col] == 4 && map[lin][col] != 1)
		return (0);
	if (l_down[col] == 1 && map[lin][col] != 4)
		return (0);
	if (l_down[col] == 2 && map[lin][col] == 4)
		return (0);
	if (l_down[col] == 3 && map[lin][col] == 4)
		return (0);
	return (1);
}

int	verif(int **map, int lin, int col, char **argv)
{
	if (lin == 0 && verif_up(map, lin, col, argv) == 0)
		return (0);
	if (lin == 3 && verif_down(map, lin, col, argv) == 0)
		return (0);
	if (col == 0 && verif_left(map, lin, col, argv) == 0)
		return (0);
	if (col == 3 && verif_right(map, lin, col, argv) == 0)
		return (0);
	return (1);
}
