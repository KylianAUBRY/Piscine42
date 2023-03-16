/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:40:40 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/14 20:30:34 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*dest;
	int	i;

	i = 0;
	dest = NULL;
	dest = malloc(ft_strlen(src) * sizeof(char));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	char	*s = "test42test";

	printf("%s", ft_strdup(s));
	return (0);
}
