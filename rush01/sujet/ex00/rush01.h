/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:48:59 by yalounic          #+#    #+#             */
/*   Updated: 2023/03/12 05:47:24 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_check_col_bot(int **map, int col, char **argv);
int		ft_check_col_top(int **map, int col, char **argv);
int		ft_check_li_right(int **map, int lin, char **argv);
int		ft_check_li_left(int **map, int lin, char **argv);
int		ft_backtracking(int **map, int lin, int col, char **argv);
int		**memalloc(void);
void	ft_putchar(char c);
void	print_map(int **map);
void	ft_init_map(int **map);
int		test_format(char **argv);
int		verif_left(int **map, int lin, int col, char **argv);
int		verif_right(int **map, int lin, int col, char **argv);
int		verif_up(int **map, int lin, int col, char **argv);
int		verif_down(int **map, int lin, int col, char **argv);
int		ft_check_col(int **map, int col, char **argv);
int		ft_check_line(int **map, int lin, char **argv);
int		ft_check_egalin(int **map, int lin);
int		ft_check_egalcol(int **map, int col);
int		verif(int **map, int lin, int col, char **argv);
void	ft_init_l_up(char **argv, int *l_up);
void	ft_init_l_down(char **argv, int *l_down);
void	ft_init_c_left(char **argv, int *c_left);
void	ft_init_c_right(char **argv, int *c_right);
int		ft_var_too_long(int **map, int lin, int col, char **argv);
int		ft_backtracking(int **map, int lin, int col, char **argv);
void	increment_column(int **map, int lin, int *col);
void	increment_row(int **map, int lin, int *col);
void	backtrack(int **map, int lin, int *col);
int		is_valid(int **map, int lin, int col, char **argv);

#endif
