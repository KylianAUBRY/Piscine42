/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:16:18 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 16:53:00 by kyaubry          ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_alpha_min(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[] = "qdwwq";
	char	str1[] = "qdwWdw";
	char	str2[] = "-dwqww";
	char	str3[] = "wdq wd";
	char	str4[] = "Qwdw";
	
	
	printf ("%d \n", ft_str_is_lowercase(str));
	printf ("%d \n", ft_str_is_lowercase(str1));
	printf ("%d \n", ft_str_is_lowercase(str2));
	printf ("%d \n", ft_str_is_lowercase(str3));
	printf ("%d \n", ft_str_is_lowercase(str4));
	return (0);
}
