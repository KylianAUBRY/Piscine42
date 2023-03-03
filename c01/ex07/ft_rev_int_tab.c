/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:28:59 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/03 00:22:05 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temps;

	size --;
	i = 0;
	while (i < size)
	{
		temps = tab[i];
		tab[i] = tab[size];
		tab[size] = temps;
		i++;
		size--;
	}
}
