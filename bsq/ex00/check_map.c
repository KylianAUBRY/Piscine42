/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:55:20 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/22 13:33:11 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"

int	ft_check_last(char *str, int i, t_cube *cube, int back)
{
	i = i - cube->nb_col;
	if (cube->square == cube->empty || cube->empty == cube->barrier || cube->barrier == cube->square) // ICI
		return (0);
	if (back != cube->nb_line)
		return (0);
	while (str[++i] != '\n')
	{
		if (str[i] != cube->barrier && str[i] != cube->empty)
			return (0);
	}
	return (1);
}

int	ft_check_btw(char *str, int i, t_cube *cube, int back)
{
	int	j;

	j = 0;
	while (str[++i])
	{
		j++;
		if (str[i] != cube->barrier && str[i] != cube->empty)
			return (0);
		if (str[i + 1] == '\n')
		{
			if (j != cube->nb_col)
				return (0);
			back++;
			j = 0;
			i++;
		}
		if (str[i + 1] == '\0')
		{
			if (cube->nb_col != j)
				return (ft_check_last(str, i, cube, back));
			else
				return (0);
		}
	}
	return (1);
}

int	check_f(char *str, int save)
{
	int i = 0;
	int count = 0;

	(void) save;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (str[i + 1] == '\n')
				return (0);
			count++;
		}
		i++;
	}
	if (count != 2)
		return (0);
	return (1);
}

int	ft_check_first(char *str, t_cube *cube, int save)
{
	int	count;

	count = 0;

	if (cube->nb_line == 1)
	{
		if (check_f(str, save) == 0)
			return (0);
		/*
		if (str[0] == '\0' || str[save] == '\n')
			return (0); */
		while (str[save + 1] != '\0')
		{			
			if (str[save] != cube->barrier && str[save] != cube->empty)
				return (0);
			save++;
		}
		return (1);
	}
	while (str[save + 1] != '\n')
	{
		if (str[save] != cube->barrier && str[save] != cube->empty)
			return (0);
		save++;
		count++;
	}
	cube->nb_col = count + 1;
	return (ft_check_btw(str, save + 1, cube, 1));
}

/*int	ft_check_dep(t_cube *cube)
{
	if (cube->square == cube->empty || cube->empty == cube->barrier || cube->barrier == cube->square)
		return (0);
}*/

int	ft_recup_symb(t_cube *cube, char *str)
{
	int	i;
	int	j;
	int	save;

	i = 0;
	j = -1;
	while (str[i + 1] != '\n' && str[i + 1] != '\0')
		i++;
	if (str[i + 1] == '\0')
		return (0);
	save = i + 2;
	cube->square = str[i--];
	cube->barrier = str[i--];
	cube->empty = str[i--];
	if (cube->square == cube->empty || cube->empty == cube->barrier || cube->barrier == cube->square)
		return (0);
	while (++j <= i)
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
		cube->nb_line = (cube->nb_line * 10) + (str[j] - '0');
	}
	if (cube->nb_line == 0)
		return (0);
	return (ft_check_first(str, cube, save));
}
