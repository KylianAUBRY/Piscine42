/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:07:09 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/13 00:26:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	int	i;

	i = nb;
	while (power > 1)
	{
		nb = nb * i;
		power --;
	}
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 5));
}
