/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 01:03:43 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/13 16:24:30 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index <= 0)
		return(0);
	if (index == 1)
		return(1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(10));
	return (0);
}
