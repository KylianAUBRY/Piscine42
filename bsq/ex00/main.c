/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:38:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/21 20:29:20 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bbq.h"

int     main(int argc, char **argv)
{
    int i;
    t_cube cube[1];
    
    i = 1;
    if (argc >= 2)
    {
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
    else
        ft_putstr("map error\n");
    return (0);    
}
