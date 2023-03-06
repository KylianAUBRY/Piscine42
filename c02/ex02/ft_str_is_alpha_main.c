/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:26:53 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 19:49:26 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	comp_alpha(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_alpha(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[] = "jyyEfewEwefE";
	char	str1[] = "7frgRGeRG";
	char	str2[] = "fewwffwfefew01";
	char	str3[] = "\rfewwffwfefew";
	char	str4[] = "";

	printf ("%d \n", ft_str_is_alpha(str));
	printf ("%d \n", ft_str_is_alpha(str1));
	printf ("%d \n", ft_str_is_alpha(str2));
	printf ("%d \n", ft_str_is_alpha(str3));
	printf ("%d \n", ft_str_is_alpha(str4));
	return (0);
}
