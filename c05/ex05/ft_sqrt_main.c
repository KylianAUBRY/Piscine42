/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:29:43 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/15 18:24:11 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 2147395600)
		return (46340);
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
		i ++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}
