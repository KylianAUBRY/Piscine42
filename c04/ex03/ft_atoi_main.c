/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:25:36 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/09 02:51:42 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i ++;
	}
	return (neg * nb);
}

int	main(void)
{
	char	str[] = "   ---+--+1234ab567";
	char	str2[] = "-+-+5dqw454545";
	char	str3[] = "++-59873fefw";
	char	str4[] = "i4655";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	return (0);
}
