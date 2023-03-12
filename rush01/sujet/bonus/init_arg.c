/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:04:51 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/12 05:12:26 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_init_l_up(char **argv, int *l_up)
{
	l_up[0] = argv[1][0] - '0';
	l_up[1] = argv[1][2] - '0';
	l_up[2] = argv[1][4] - '0';
	l_up[3] = argv[1][6] - '0';
}

void	ft_init_l_down(char **argv, int *l_down)
{
	l_down[0] = argv[1][8] - '0';
	l_down[1] = argv[1][10] - '0';
	l_down[2] = argv[1][12] - '0';
	l_down[3] = argv[1][14] - '0';
}

void	ft_init_c_left(char **argv, int *c_left)
{
	c_left[0] = argv[1][16] - '0';
	c_left[1] = argv[1][18] - '0';
	c_left[2] = argv[1][20] - '0';
	c_left[3] = argv[1][22] - '0';
}

void	ft_init_c_right(char **argv, int *c_right)
{
	c_right[0] = argv[1][24] - '0';
	c_right[1] = argv[1][26] - '0';
	c_right[2] = argv[1][28] - '0';
	c_right[3] = argv[1][30] - '0';
}
