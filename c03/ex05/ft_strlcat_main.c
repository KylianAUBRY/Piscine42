/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:30:49 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/08 02:28:03 by kyaubry          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	t;

	t = 0;
	i = 0;
	t = (unsigned int)ft_strlen(dest);
	if (t > size)
		t = size;
	while (t + i < size - 1 && size != '\0' && src[i] != '\0')
	{
		dest[t + i] = src[i];
		i ++;
	}
	if (size > t)
	{
		dest[t + 1] = '\0';
	}
	i = (unsigned int)ft_strlen(src);
	return (t + i);
}

int	main(void)
{
	char	d[] = "test";
	char	s[] = "42blabla";

	printf("%d\n",ft_strlcat(d, s, 10));
	printf("%s\n", d);
	return (0);
}
