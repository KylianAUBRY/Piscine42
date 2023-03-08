/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:12:08 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/06 21:59:26 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	comp_num(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_num(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[] = "1568";
	char	str1[] = "156 8";
	char	str2[] = "156\n8";
	char	str3[] = "-1568";
	char	str4[] = "";
	
	
	printf ("%d \n", ft_str_is_numeric(str));
	printf ("%d \n", ft_str_is_numeric(str1));
	printf ("%d \n", ft_str_is_numeric(str2));
	printf ("%d \n", ft_str_is_numeric(str3));
	printf ("%d \n", ft_str_is_numeric(str4));
	return (0);
}
