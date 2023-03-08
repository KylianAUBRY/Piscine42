/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:33:32 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 18:54:24 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	comp_alpha_min(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (comp_alpha_min(str[i]) == 1)
			str[i] = str[i] - 32;
		i ++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "uyng";
	char	str1[] = "hrFEgweFg";
	char	str2[] = "-WfeE";
	char	str3[] = "\nWDdw";
	char	str4[] = ".dwq";

	printf ("%s \n", ft_strupcase(str));
	printf ("%s \n", ft_strupcase(str1));
	printf ("%s \n", ft_strupcase(str2));
	printf ("%s \n", ft_strupcase(str3));
	printf ("%s \n", ft_strupcase(str4));
	return (0);
}
