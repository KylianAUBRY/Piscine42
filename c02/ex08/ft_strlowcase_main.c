/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:59:33 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 19:09:37 by kyaubry          ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (comp_alpha_maj(str[i]) == 1)
			str[i] = str[i] + 32;
		i ++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "QDWQD";
	char	str1[] = "FGEEFsEF";
	char	str2[] = "-WDWDQ";
	char	str3[] = "WWQ WDDW";
	char	str4[] = "wWD\nWD";

	printf ("%s \n", ft_strlowcase(str));
	printf ("%s \n", ft_strlowcase(str1));
	printf ("%s \n", ft_strlowcase(str2));
	printf ("%s \n", ft_strlowcase(str3));
	printf ("%s \n", ft_strlowcase(str4));
	return (0);
}
