/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:20:08 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/04 18:28:43 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>

void	ft_putchar(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while(i != size)
	{
		temp = tab[i];
		printf("%d", temp);
		i ++;
	}
} */

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	tps;
	int	tps2;

	i = 0;
	tps2 = size;
	while (tps2 >= 0)
	{
		while (i < tps2 - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tps = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tps;
			}
			i ++;
		}
		i = 0;
		tps2 --;
	}
	ft_putchar(tab, size);
}

/*
int	main(void)
{
	int tab[8] = {3, 2, 1, 4, 5, 7, 9, -9};
	int size = 8;

	ft_putchar(tab, size);
	printf("\n");
	ft_sort_int_tab(tab, size);
	return (0);
} */
