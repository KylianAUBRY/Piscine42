/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:26:15 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/12 17:32:14 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_li_left(int **map, int lin, char **argv)
{
	int	count;
	int	j;
	int	i;
	int	c_left[4];

	count = 1;
	i = 1;
	j = 0;
	ft_init_c_left(argv, c_left);
	while (i <= 3)
	{
		if (map[lin][j] < map[lin][i])
		{
			j = i;
			count++;
		}
		i++;
	}
	if (c_left[lin] == count)
		return (1);
	else
		return (0);
}

int	ft_check_li_right(int **map, int lin, char **argv)
{
	int	count;
	int	j;
	int	i;
	int	c_right[4];

	count = 1;
	i = 2;
	j = 3;
	ft_init_c_right(argv, c_right);
	while (i >= 0)
	{
		if (map[lin][j] < map[lin][i])
		{
			j = i;
			count++;
		}
		i--;
	}
	if (c_right[lin] == count)
		return (1);
	else
		return (0);
}

int	ft_check_col_top(int **map, int col, char **argv)
{
	int	count;
	int	j;
	int	i;
	int	l_up[4];

	count = 1;
	i = 1;
	j = 0;
	ft_init_l_up(argv, l_up);
	while (i <= 3)
	{
		if (map[j][col] < map[i][col])
		{
			j = i;
			count++;
		}
		i++;
	}
	if (l_up[col] == count)
		return (1);
	else
		return (0);
}

int	ft_check_col_bot(int **map, int col, char **argv)
{
	int	count;
	int	j;
	int	i;
	int	l_down[4];

	count = 1;
	i = 2;
	j = 3;
	ft_init_l_down(argv, l_down);
	while (i >= 0)
	{
		if (map[j][col] < map[i][col])
		{
			j = i;
			count++;
		}
		i--;
	}
	if (l_down[col] == count)
		return (1);
	else
		return (0);
}

int	test_format(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
		i ++;
	if (i != 31)
		return (0);
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 1 && argv[1][i] != ' ')
			return (0);
		if (i % 2 == 0 && (argv[1][i] < '0' || argv[1][i] > '4'))
			return (0);
		i ++;
	}
	return (1);
}
