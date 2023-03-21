/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bbq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:38:29 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/21 20:21:27 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BBQ_H
 # define BBQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_cube
{
    int val;
    int x;
    int y;
    int xtps;
    int ytps;
    int nb_line;
    int nb_col;
    char	empty;
	char	barrier;
	char    square;
    char    **map;
}t_cube;

typedef struct s_cube_tmp
{
    int val;
    int x;
    int y;
    int xtps;
    int ytps;

}t_cube_tmp;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	    ft_strlen(char *str);
int    init_map(t_cube *cube, char *src);
int	ft_recup_symb(t_cube *cube, char *str);
void	init_tab(t_cube *cube, char *map_txt);
void	malloc_tab(t_cube *cube, char *map_txt);
void    print_map(t_cube *cube);
int    algo(t_cube *cube, t_cube_tmp *cube_tmp);
int verif_ligne(t_cube *cube, t_cube_tmp *cube_tmp);
int verif_col(t_cube *cube, t_cube_tmp *cube_tmp);
int verif2(t_cube *cube, t_cube_tmp *cube_tmp);
int verif(t_cube *cube, t_cube_tmp *cube_tmp);
int    call_algo(t_cube *cube);
void    init_cube(t_cube *cube, t_cube_tmp *cube_tmp);
void    change_cube(t_cube *cube, t_cube_tmp *cube_tmp);
void    res_tps(t_cube_tmp *cube_tmp);
int    modif_map(t_cube *cube);
int     good(t_cube *cube);

 #endif