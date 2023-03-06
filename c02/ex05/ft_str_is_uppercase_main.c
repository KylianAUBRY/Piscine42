/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:57:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 16:59:03 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	comp_alpha_maj(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_alpha_maj(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[] = "QDWQD";
	char	str1[] = "FGEEFsEF";
	char	str2[] = "-WDWDQ";
	char	str3[] = "WWQ WDDW";
	char	str4[] = "wWDWD";
	
	
	printf ("%d \n", ft_str_is_uppercase(str));
	printf ("%d \n", ft_str_is_uppercase(str1));
	printf ("%d \n", ft_str_is_uppercase(str2));
	printf ("%d \n", ft_str_is_uppercase(str3));
	printf ("%d \n", ft_str_is_uppercase(str4));
	return (0);
}
