/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:33:49 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/07 00:36:58 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i ++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[50] = "test";
	char	dest1[50] = "test";
	char	src[] = "42, test";

	printf("ft : %s\n", ft_strcat(dest, src));
	printf("lib: %s\n", strcat(dest1, src));
	return (0);
}
