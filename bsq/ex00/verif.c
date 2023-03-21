/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:21:31 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/21 07:14:58 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"

int verif_ligne(t_cube *cube, t_cube_tmp *cube_tmp)
{
    int i;
    int j;
    
    i = cube_tmp->y;
    j = cube_tmp->ytps;
    while (j >= i)
    {
        if (cube->map[j][cube_tmp->xtps] == cube->barrier)
            return (0);
        j--;
    }
    return (1);
}

int verif_col(t_cube *cube, t_cube_tmp *cube_tmp)
{
    int i;
    int j;

    i = cube_tmp->x;
    j = cube_tmp->xtps;
    while (j >= i)
    {
        if (cube->map[cube_tmp->ytps][j] == cube->barrier)
            return (0);
        j--;
    }
    return (1);
}

int verif2(t_cube *cube, t_cube_tmp *cube_tmp)
{
    if (cube_tmp->xtps >= cube->nb_col || cube_tmp->ytps >= cube->nb_line)
        return (0);
    if (verif_ligne(cube, cube_tmp) == 1 && verif_col(cube, cube_tmp) == 1)
        return (1);
    return (0);
}

int verif(t_cube *cube, t_cube_tmp *cube_tmp)
{
    if (cube_tmp->xtps >= cube->nb_col || cube_tmp->ytps >= cube->nb_line)
        return (0);
    if (verif_ligne(cube, cube_tmp) == 1 && verif_col(cube, cube_tmp) == 1)
        return (1);
    return (0);
}

int    call_algo(t_cube *cube)
{
    t_cube_tmp cube_tmp[1];

    init_cube(cube, cube_tmp);
    if (cube->nb_line > 1)
        algo(cube, cube_tmp);
    else
    {
        if (cube->nb_line == 1)
        {
            while (cube->map[cube_tmp->y][cube_tmp->x] == cube->barrier)
            {
                cube_tmp->x ++;
                if (cube->map[cube_tmp->y][cube_tmp->x] == '\0')
                    return (0);
            }
            res_tps(cube_tmp);   
            change_cube(cube, cube_tmp);
            modif_map(cube);
        }
    }
    return (1);
}