/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:15:49 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/20 21:49:111 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"

void	malloc_tab(t_cube *cube, char *map_txt)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	cube->map = (char **)malloc((sizeof(char*) * cube->nb_line) + 1);
	while(map_txt[j] != '\n')
		j++;
	j++;
	while(i <= cube->nb_line)
	{
		while(map_txt[j] != '\n' && map_txt[j] != '\0')
		{
			cube->map[i] = (char*)malloc((sizeof(char) * (k + 1)) + 1);
			k++;
			j++;
		}
		if(map_txt[j] != '\0' && map_txt[j] == '\n')
			j++;
		k = 0;
		i++;
	}
}

void	init_tab(t_cube *cube, char *map_txt)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while(map_txt[j] != '\n')
		j++;
	malloc_tab(cube, map_txt);
	j ++;
	while(i < cube->nb_line)
	{
		while(map_txt[j] != '\n' && map_txt[j] != '\0')
		{
			cube->map[i][k] = map_txt[j];
			k++;
			j++;
		}
		if(map_txt[j] == '\n')
			j++;
		cube->map[i][k] = '\0';
		k = 0;
		i++;
	}
}

int init_map(t_cube *cube, char *src)
{
	char	*map_txt;
	int		map_file;
	int		read_file = 1;
	int		i;

	map_txt = malloc((sizeof(char) * 2147483646) + 1);
	map_file = open(src, O_RDONLY);
	if (map_file == -1)
	{
		(void)read_file;
    	free(map_txt);
		return (0);
	}
	while (read_file)
	{
		read_file = read(map_file, map_txt, 2147483646);
		if (read_file != 0)
			i = read_file;
	}
	map_txt[i] = '\0';
	if (ft_recup_symb(cube, map_txt) == 1)
	{
		init_tab(cube, map_txt);
		(void)read_file;
    	free(map_txt);
		return (1);
	}
	(void)read_file;
    free(map_txt);
	return (0);
}
/*
	while (read_file)
	{
		read_file = read(map_file, map_txt, 4096 + 1);
		map_txt[read_file] = '\0';
		printf("%s", map_txt);
	}
..........
.........o
..........
.........o
..........
..........
.o........
.o........
o.........
..........
*/