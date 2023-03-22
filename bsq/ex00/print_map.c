/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:31:52 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/22 08:31:53 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"

int     good(t_cube *cube)
{
    if (cube->map[cube->y][cube->x] != cube->barrier)
        return (1);
    return (0);
}

void    print_map(t_cube *cube)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (i < cube->nb_line)
    {
        while (cube->map[i][j] != '\0')
        {
            ft_putchar(cube->map[i][j]);
            j++;
        }
        ft_putchar('\n');
        j = 0;
        i++;
    }
}
