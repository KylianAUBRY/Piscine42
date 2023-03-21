/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:21:27 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/21 20:29:33 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"


void    change_cube(t_cube *cube, t_cube_tmp *cube_tmp)
{
    cube->val = cube_tmp->val;
    cube->x = cube_tmp->x;
    cube->y = cube_tmp->y;
    cube->xtps = cube_tmp->xtps;
    cube->ytps = cube_tmp->ytps;
}

void    res_tps(t_cube_tmp *cube_tmp)
{
    cube_tmp->xtps = cube_tmp->x;
    cube_tmp->ytps = cube_tmp->y;
}

int    modif_map(t_cube *cube)
{
    int i;

    i = cube->xtps;
    if (good(cube) == 0)
        return (0);
    while (cube->ytps >= cube->y)
    {
        while (cube->xtps >= cube->x)
        {
            cube->map[cube->ytps][cube->xtps] = cube->square;
            cube->xtps--;
        }
        cube->xtps = i;
        cube->ytps  --;   
    }
    return (1);
}
void    init_cube(t_cube *cube, t_cube_tmp *cube_tmp)
{
    cube->val = -1;
    cube->x = 0;
    cube->y = 0;
    cube->xtps = 0;
    cube->ytps = 0;
    cube_tmp->val = -1;
    cube_tmp->x = 0;
    cube_tmp->y = 0;
    cube_tmp->xtps = 0;
    cube_tmp->ytps = 0;
}

int    algo(t_cube *cube, t_cube_tmp *cube_tmp)
{
    while (cube_tmp->y < cube->nb_line && cube_tmp->x < cube->nb_col)
    {
        while (cube->map[cube_tmp->y][cube_tmp->x] != '\0' && cube_tmp->x < cube->nb_col && cube_tmp->y < cube->nb_line)
        {
            while (verif2(cube, cube_tmp) == 1)
            {
                if (verif(cube, cube_tmp) == 1)
                {
                    cube_tmp->val = (cube_tmp->xtps - cube_tmp->x);
                    if (cube_tmp->val > cube->val)
                        change_cube(cube, cube_tmp);
                }
                cube_tmp->xtps ++;
                cube_tmp->ytps ++;
            }
            cube_tmp->x ++;
            res_tps(cube_tmp);
        }
        cube_tmp->x = 0;
        cube_tmp->y ++;
        res_tps(cube_tmp);
    }
    if (modif_map(cube) == 1)
        return (1);
    return (0);
}
