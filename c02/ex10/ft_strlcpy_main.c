/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:30:58 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 22:17:01 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && i < (unsigned int)ft_strlen(src))
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return ((unsigned int)ft_strlen(src));
}

int	main(void)
{
	char	src[] = "test42test";
	char	dest[3];

	ft_strlcpy(dest, src, 3);
	printf("%s\n", dest);
}
