/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:15:49 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/22 19:19:11 by kyaubry          ###   ########.fr       */
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
	cube->map = (char **)malloc((sizeof(char *) * cube->nb_line) + 1);
	while (map_txt[j] != '\n')
		j++;
	j++;
	while (i <= cube->nb_line)
	{
		while (map_txt[j] != '\n' && map_txt[j] != '\0')
		{
			cube->map[i] = (char *)malloc((sizeof(char) * (k + 1)) + 1);
			k++;
			j++;
		}
		if (map_txt[j] != '\0' && map_txt[j] == '\n')
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
	while (map_txt[j] != '\n')
		j++;
	malloc_tab(cube, map_txt);
	j ++;
	while (i < cube->nb_line)
	{
		while (map_txt[j] != '\n' && map_txt[j] != '\0')
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

int	ft_make_map(t_cube *cube, char *map_txt)
{
		init_tab(cube, map_txt);
    	free(map_txt);
		return (1);
}
/*
int make_in_map(char *src)
{
	char	*map_txt;
	int		map_file;
	int		read_file = 1;
	int		max = 4096;
	
	map_file = open(src, O_RDONLY);
	if (map_file == -1)
	{
    	free(map_txt);
		return (0);
	}
	while (read_file)
	{	
		free(map_txt);
		map_txt = malloc((sizeof(char) * max) + 1);
		read_file = read(map_file, map_txt, max);
		max = max * 2;
	}
}*/

/*
	map_txt = malloc((sizeof(char) * max) + 1);
	map_file = open(src, O_RDONLY);
	if (map_file == -1)
	{
    	free(map_txt);
		return (0);
	}
 char *big = NULL;
 char *tmp = map_txt;
	while (read_file)
	{
		read_file = read(map_file, map_txt, max);
		if (read_file != 0)
			i = read_file;
		if (i > max) // i > max
		{
			big = malloc((sizeof(char) * ft_strlen(tmp) * 2) + 1);
			big = ft_strcpy(big, tmp);
			max = (sizeof(char) * ft_strlen(tmp) * 2) + 1;
			free(tmp);
			tmp = NULL;
			tmp = big;
			free(big);
			big = NULL;
		}
	} */ /*
int init_map(t_cube *cube, char *src)
{
	char	*map_txt;
	int		map_file;
	int		read_file = 1;
	int		i;
	int		max = 4096;

	cube->nb_line = 0;
	map_txt = malloc((sizeof(char) * max) + 1);
	if (map_txt != NULL)
		return (0);
	map_file = open(src, O_RDONLY);
	if (map_file == -1)
	{
			free(map_txt);
		return (0);
	}
	while (read_file)
	{
		map_txt = malloc((sizeof(char) * max) + 1);
		read_file = read(map_file, map_txt, max);
		if (read_file != 0)
			i = max * 2;
		max = max * 2;
		free(map_txt);
	}
	map_file = open(src, O_RDONLY);
	map_txt = malloc((sizeof(char) * i) + 1);
	read_file = read(map_file, map_txt, i);
	map_txt[i] = '\0';
	cube->nb_line = 0;
	if (ft_recup_symb(cube, map_txt) == 1)
		return (ft_make_map(cube, map_txt));
    free(map_txt);
	return (0);
}*/
char	*ft_strncat_m(char *dest, char *src, int taille)
{
	int			i;
	int			tdest;
	char		*ret;

	ret = malloc((ft_strlen(dest) + taille + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = -1;
	while (dest[++i])
		ret[i] = dest[i];
	ret[i] = 0;
	tdest = ft_strlen(dest);
	i = 0;
	while (src[i] && i < taille)
	{
		ret[tdest + i] = src[i];
		i++;
	}
	ret[tdest + i] = 0;
	free(dest);
	return (ret);
}
int init_map(t_cube *cube, char *src)
{
	char	buf[4096];
	int		taille;
	char	*dest;
	int		map_file;

	taille = 1;	
	map_file = open(src, O_RDONLY);
	dest = malloc(sizeof(char) * 1);
	if (!dest)
		return (0);
	dest[0] = 0;
	while (taille > 0)
	{
		taille = read(map_file, buf, 4096);
		if (taille > 0)
			dest = ft_strncat_m(dest, buf, taille);
	}
	cube->nb_line = 0;
	if (ft_recup_symb(cube, dest) == 1)
		return (ft_make_map(cube, dest));
	free(dest);
	return (0);
}



int init_map_du_bled(t_cube *cube)
{
	char	buf[4096];
	int		taille;
	char	*dest;

	taille = 1;	
	dest = malloc(sizeof(char) * 1);
	if (!dest)
		return (0);
	dest[0] = 0;
	while (taille > 0)
	{
		taille = read(0, buf, 4096);
		if (taille > 0)
			dest = ft_strncat_m(dest, buf, taille);
	}
	cube->nb_line = 0;
	if (ft_recup_symb(cube, dest) == 1)
		return (ft_make_map(cube, dest));
	free(dest);
	return (0);
}
/*
	while (read_file)
	{
		read_file = read(map_file, map_txt, 4096 + 1);
		map_txt[read_file] = '\0';
		printf("%s", map_txt);
	}
	{
		init_tab(cube, map_txt);
		(void)read_file;
    	free(map_txt);
		return (1);
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