/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:38:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/22 19:54:43 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"
void main_2(t_cube *cube, int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (init_map(cube, argv[i]) == 1)
        {
            if (call_algo(cube) == 1 &&  good(cube) == 1)
                print_map(cube);
            else
                ft_putstr("map error\n");
        }
        else
            ft_putstr("map error\n");
        if (i != argc - 1)
            ft_putchar('\n');
        i++;
    }
}

int main(int argc, char **argv) //FD(0)
{
    t_cube cube[1];
    
    if (argc >= 2)
    {
        main_2(cube, argc, argv);
    }
    else
    {
        if (init_map_du_bled(cube) == 1)
        {
            if (call_algo(cube) == 1 &&  good(cube) == 1)
                print_map(cube);
            else
                ft_putstr("map error\n");
        }
        else
            ft_putstr("map error\n");
    }
    return (0);
}
/*        while (i < argc)
        {
            if (init_map(cube, argv[i]) == 1)
            {
                if (call_algo(cube) == 1 &&  good(cube) == 1)
                    print_map(cube);
                else
                    ft_putstr("map error\n");
            }
            else
                ft_putstr("map error\n");
            if (i != argc - 1)
                ft_putchar('\n');
            i++;
}*/