/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:35:29 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/15 12:45:52 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int	*dest;

	dest = NULL;
	if (min >= max)
		return (0);
	if (min < 0)
		dest = malloc((min * -1) + max * sizeof(int))
	else
		dest = malloc(min + max * sizeof(int))
	while (min < max)
		dest[min]= min;
	return(dest);
}
