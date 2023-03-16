/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:00:55 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/15 18:56:20 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int	i;
	int	s;

	i = size -1;
	s = 0;
	s = s + ft_strlen(strs[0]);
	while (i > 0)
	{
		s = s + ft_strlen(sep);
		s = s + ft_strlen(strs[i]);
		i --;
	}
	dest = malloc(s * sizeof(char));
	i = 0;
	while (i >= size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size)
			dest = ft_strcat(dest, sep);
		i ++;
	}
	return (dest);
}
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s",ft_strjoin(argc, argv, ", "));
}
