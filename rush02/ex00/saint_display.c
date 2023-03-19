/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saint_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:09:20 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/19 23:03:07 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_thousand(t_numbers *numbers, char cen, char di, char unit)
{
	ft_hundred(numbers, cen, di, unit);
	if (cen != '0' || di != '0' || unit != '0')
	{
		ft_putchar(' ');
		ft_putstr(numbers[29].name);
	}
}

void	ft_million(t_numbers *numbers, char cen, char di, char unit)
{
	ft_hundred(numbers, cen, di, unit);
	if (cen != '0' || di != '0' || unit != '0')
	{
		ft_putchar(' ');
		ft_putstr(numbers[30].name);
	}
}

void	ft_billion(t_numbers *numbers, char unit)
{
	if (unit != '0')
	{
		numbers[0].space = '1';
		ft_unite(numbers, unit);
		ft_putchar(' ');
		ft_putstr(numbers[31].name);
	}
}
