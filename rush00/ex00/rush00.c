/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:25:42 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/04 17:02:24 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	afficher_x_up(int x)
{
	ft_putchar('o');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
}

void	afficher_x_down(int x)
{
	ft_putchar('o');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
}



void	afficher_y(int y, int x)
{
	int	tps;

	tps = x;
	while (y > 2)
	{
		ft_putchar('|');
		while (x > 2)
		{
			ft_putchar(' ');
			x --;
		}
		x = tps;
		if (x > 1)
		{
			ft_putchar('|');
		}
		y --;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		afficher_x_up(x);
		ft_putchar('\n');
		afficher_y(y, x);
		if (y >= 2)
		{
			afficher_x_down(x);
			ft_putchar('\n');
		}
	}
}
