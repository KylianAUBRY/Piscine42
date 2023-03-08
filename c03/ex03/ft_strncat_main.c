/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:37:35 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/07 00:58:39 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && nb > 0)
	{
		dest[len + i] = src[i];
		i ++;
		nb --;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[50] = "test";
	char	dest1[50] = "test";
	char	src[] = "42, test";

	printf("ft : %s\n", ft_strcat(dest, src, 5));
	printf("lib: %s\n", strncat(dest1, src, 5));
	return (0);
}
