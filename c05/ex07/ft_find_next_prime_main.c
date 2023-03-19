/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:56:17 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/19 15:59:41 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb ++;
	return (nb);
}
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(2147483628));
}
