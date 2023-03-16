/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:46:38 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/15 13:03:26 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (min < 0)
		*range = malloc(((min * -1) + max) * sizeof(int))
	else
		*range = malloc((min + max) * sizeof(int))
	if (*range == NULL)
		return(-1);
	while (min < max)
	{
		(*dest)[min]= min;
		i ++;
	}
	return (i);
}
