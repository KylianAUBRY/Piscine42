/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 06:09:46 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/12 20:15:46 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_verif_map(int **map, int *lin, int *col, char **argv)
{
	if (verif(map, *lin, *col, argv) == 1 && *lin != 3)
	{
		*col = *col + 1;
	}
	else if (*lin != 3)
		map[*lin][*col]++;
	if (*lin == 3 && ft_check_col(map, *col, argv) == 1)
	{
		if (*col == 3 && *lin == 3 && ft_check_line(map, *lin, argv) == 1)
			if (verif(map, *lin, *col, argv) == 1)
				return (1);
		*col = *col + 1;
	}
	else if (*lin == 3)
		map[*lin][*col]++;
	return (0);
}

void	ft_line(int **map, int *lin, int *col, char **argv)
{
	if (ft_check_line(map, *lin, argv) == 0)
	{
		*col = 3;
		map[*lin][*col]++;
	}
	else
	{
		*lin = *lin + 1;
		*col = 0;
	}
}

int	ft_backtracking(int **map, int lin, int col, char **argv)
{
	if (ft_verif_map(map, &lin, &col, argv) == 1)
		return (1);
	if (col > 3)
	{
		if (lin < 0)
			return (0);
		ft_line(map, &lin, &col, argv);
	}
	while (map[lin][col] > 4)
	{
		map[lin][col] = 1;
		col --;
		if (col < 0)
		{
			col = 3;
			lin --;
		}
		if (lin < 0)
			return (0);
		map[lin][col]++;
	}
	if (ft_backtracking(map, lin, col, argv) == 1)
		return (1);
	else
		return (0);
}
