/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saint_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:52:17 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/19 23:13:54 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_unite(t_numbers *numbers, char unit)
{
	ft_putstr(numbers[(unit - '0')].name);
}

void	ft_tenth(t_numbers *numbers, char di, char unit)
{
	int	nb;

	if (di != '1')
	{
		if (numbers[0].space != '0')
			ft_putchar(' ');
		numbers[0].space = '1';
		ft_putstr(numbers[((di - '0') + 18)].name);
		if (unit != '0')
		{
			if (numbers[0].space != '0')
				ft_putchar(' ');
			numbers[0].space = '1';
			ft_unite(numbers, unit);
		}
	}
	else
	{
		nb = 10;
		nb = nb + (unit - '0');
		if (numbers[0].space != '0')
			ft_putchar(' ');
		numbers[0].space = '1';
		ft_putstr(numbers[nb].name);
	}
}

void	ft_hundred(t_numbers *numbers, char cen, char di, char unit)
{
	if (cen != '0')
	{
		if (numbers[0].space != '0')
			ft_putchar(' ');
		numbers[0].space = '1';
		ft_unite(numbers, cen);
		ft_putchar(' ');
		ft_putstr(numbers[28].name);
	}
	if (di != '0')
	{
		ft_tenth(numbers, di, unit);
	}
	else
	{
		if (unit != '0')
		{
			if (numbers[0].space != '0')
				ft_putchar(' ');
			numbers[0].space = '1';
			ft_unite(numbers, unit);
		}
	}
}

void	st_algo(t_numbers *numbers, char *argv)
{
	int	val;

	numbers[0].space = '0';
	val = ft_strlen(argv);
	if (val == 10)
		ft_billion(numbers, argv[val - 10]);
	if (val >= 9)
		ft_million(numbers, argv[val - 9], argv[val - 8], argv[val - 7]);
	if (val == 8)
		ft_million(numbers, '0', argv[val - 8], argv[val - 7]);
	if (val == 7)
		ft_million(numbers, '0', '0', argv[val - 7]);
	if (val >= 6)
		ft_thousand(numbers, argv[val - 6], argv[val - 5], argv[val - 4]);
	if (val == 5)
		ft_thousand(numbers, '0', argv[val - 5], argv[val - 4]);
	if (val == 4)
		ft_thousand(numbers, '0', '0', argv[val - 4]);
	if (val >= 3)
		ft_hundred(numbers, argv[val - 3], argv[val - 2], argv[val - 1]);
	if (val == 2)
		ft_tenth(numbers, argv[val - 2], argv[val - 1]);
	if (val == 1 || ft_verif0(argv) == 1)
		ft_unite(numbers, argv[val - 1]);
	ft_putchar('\n');
}
