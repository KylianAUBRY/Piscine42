/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:50:55 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/19 23:16:45 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_number
{
	char	*value;
	char	*name;
	char	space;

}t_numbers;

typedef struct s_template
{
	char	*value;

}t_template;

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	init_dict(t_numbers	*numbers, char *src);
int		main(int argc, char **argv);
void	st_algo(t_numbers	*numbers, char *argv);
void	ft_putchar(char c);
void	ft_thousand(t_numbers *numbers, char cen, char di, char unit);
void	ft_million(t_numbers *numbers, char cen, char di, char unit);
void	ft_billion(t_numbers *numbers, char unit);
void	ft_unite(t_numbers *numbers, char unit);
void	ft_tenth(t_numbers *numbers, char di, char unit);
void	ft_hundred(t_numbers *numbers, char cen, char di, char unit);
int		ft_verif0(char *str);
void	ft_fill_template(char *dict_content_template);
void	ft_fill_name(char *dict_content, t_numbers *numbers);
void	ft_fill_value(char *dict_content, t_numbers *numbers);
void	ft_fill_malloc_value(char *dict_content, t_numbers *numbers);
void	ft_fill_malloc_name(char *dict_content, t_numbers *numbers);
void	ft_fill_template(char *dict_content_template);

#endif
