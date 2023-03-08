/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:24:33 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/06 22:03:36 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	comp_affi(char str)
{
	if (str >= 32 && str <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_affi(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[] = "QDWQD";
	char	str1[] = "FGEEF sEF";
	char	str2[] = "-WDWDQ";
	char	str3[] = "\r";
	char	str4[] = "wdwq\n";
	
	
	printf ("%d \n", ft_str_is_printable(str));
	printf ("%d \n", ft_str_is_printable(str1));
	printf ("%d \n", ft_str_is_printable(str2));
	printf ("%d \n", ft_str_is_printable(str3));
	printf ("%d \n", ft_str_is_printable(str4));
	return (0);
}
