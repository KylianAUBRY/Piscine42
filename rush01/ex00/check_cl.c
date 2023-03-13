/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:34:16 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/12 05:42:59 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_egalin(int **map, int lin)
{
	int	j;
	int	i;

	i = 0;
	j = 1;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (map[lin][j] == map[lin][i])
				return (0);
			j++;
		}
		i ++;
		j = i + 1;
	}
	return (1);
}

int	ft_check_egalcol(int **map, int col)
{
	int	j;
	int	i;

	i = 0;
	j = 1;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (map[j][col] == map[i][col])
				return (0);
			j++;
		}
		i ++;
		j = i + 1;
	}
	return (1);
}

int	ft_check_line(int **map, int lin, char **argv)
{
	if (ft_check_li_right(map, lin, argv) == 1)
	{
		if (ft_check_egalin(map, lin) == 1)
		{
			if (ft_check_li_left(map, lin, argv) == 1)
				return (1);
			else
				return (0);
		}
		else
			return (0);
	}
	else
		return (0);
}

int	ft_check_col(int **map, int col, char **argv)
{
	if (ft_check_col_bot(map, col, argv) == 1)
	{
		if (ft_check_col_top(map, col, argv) == 1)
		{
			if (ft_check_egalcol(map, col) == 1)
				return (1);
			else
				return (0);
		}
		else
			return (0);
	}
	else
		return (0);
}
