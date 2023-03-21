/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:55:20 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/21 02:00:21 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"

int	ft_check_last(char *str, int i, t_cube *cube, int back)
{
	i = i - cube->nb_col;
	back++;
	if (back != cube->nb_line)
		return (0);
	while (str[++i])
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
	i++;		
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
			if (cube->nb_col == j)
				return (ft_check_last(str, i, cube, back));
			else
				return (0);
		}
	}
	return (1);
}

int	ft_check_first(char *str, t_cube *cube, int save)
{
	int	i;
	int	count;
	int	back;

	i = save;
	count = 0;
	back = 0;
	if (cube->nb_line == 1)
	{
		while (str[i])
		{
			if (str[i] != cube->barrier && str[i] != cube->empty)
				return (0);
			i++;
		}
		return (1);
	}
	while (str[i + 1] != '\n')
	{
		if (str[i] != cube->barrier && str[i] != cube->empty)
			return (0);
		i++;
		count++;
	}
	if (str[i + 1] == '\n') 
		back = 1;
	cube->nb_col = count + 1;
	return (ft_check_btw(str, i, cube, back));
}

int	ft_recup_symb(t_cube *cube, char *str)
{
	int	i;
	int	j;
	int	save;
	
	i = 0;
	j = -1;
	cube->nb_line = 0;
	while(str[i + 1] != '\n' && str[i + 1] != '\0')
		i++;
	if (str[i + 1] == '\0')
		return (0);
	save = i + 2;
	cube->square = str[i--];
	cube->barrier = str[i--];
	cube->empty = str[i--];
	if (cube->square == cube->empty || cube->empty == cube->barrier || cube->barrier == cube->square)
		return (0);
	while(++j <= i)
	{
		if (str[j] < '0' || str[j] > '9')
			return(0);
		cube->nb_line = (cube->nb_line * 10) + (str[j] - '0');
	}
	if (cube->nb_line == 0)
		return(0);
	return (ft_check_first(str, cube, save));
}