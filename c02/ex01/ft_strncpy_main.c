/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 23:58:06 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 21:22:47 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n - 1)
	{
		dest[i] = src[i];
		i ++;
		if (src[i] == '\0')
		{
			while (i <= n - 1)
			{
				dest[i] = '\0';
				i ++;
			}
		}
	}	
	return (dest);
}

int	main(void)
{
	int	n = 10;
	char	src[] = "test";
	char	dest[99];

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}
