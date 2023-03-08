/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:43:57 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/08 02:37:01 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && n -1 > 0)
	{
		i ++;
		n --;
	}
	if (s1[i - 1] == '\0' && s2 [i - 1] == '\0' && (i - 1) > 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

int	main(void)
{
	char	s1[] = "qwert";
	char	s2[] = "qwert";

	printf ("%d", ft_strncmp(s1, s2, 5));
	printf ("\n%d", strncmp(s1, s2, 5));
	return (0);
}
