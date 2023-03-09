/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:13:23 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/09 19:20:10 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

int	verif_base(char *b)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 1;
	if (ft_strlen(b) <= 1)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '+' || b[i] == '-')
			return (0);
		while (b[i2] != '\0')
		{
			if (b[i] == b[i2])
				return (0);
			i2 ++;
		}
		i ++;
		i2 = i + 1;
	}
	return (1);
}

int	cr_int_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i ++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	if (verif_base(base) != 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i ++;
	}
	while (cr_int_base(str[i], base) != -1)
	{
		nb = nb * ft_strlen(base);
		nb = nb + cr_int_base(str[i], base);
		i ++;
	}
	return (neg * nb);
}
