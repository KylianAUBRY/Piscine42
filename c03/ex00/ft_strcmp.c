/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:00:43 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/06 21:41:10 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i ++;
	}
	if (s1[i - 1] == '\0' && s2 [i - 1] == '\0' && (i - 1) > 0)
	{
		return (0);
	} else
	{
		return (s1[i] - s2[i]);
	}
}

int	main(void)
{
	char	s1[] = "";
	char	s2[] = "";

	printf ("%d", ft_strcmp(s1, s2));
	printf ("\n%d", strcmp(s1, s2));
	return (0);
}
