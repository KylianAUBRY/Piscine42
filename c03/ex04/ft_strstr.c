/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:57:58 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/07 01:29:38 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (str[i] != '\0')
	{
		while (str[i + i2] == to_find[i2] && to_find[i2] != '\0')
			i2 ++;
		if (to_find[i2] == '\0')
			return (str + i);
		i++;
		i2 = 0;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "salut 42 le havre";
	char	to_find[] = "42";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
