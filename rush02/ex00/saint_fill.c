/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saint_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:12:43 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/19 23:00:45 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_fill_malloc_name(char *dict_content, t_numbers *numbers)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 31)
	{
		while (dict_content[j] != '\n' && dict_content[j] != '\0')
		{	
			if (dict_content[j] >= 'a' && dict_content[j] <= 'z')
				k++;
			j++;
		}
		numbers[i].name = (char *)malloc(sizeof(char) * k + 1);
		if (dict_content[j] == '\n')
			j++;
		k = 0;
		i++;
	}
}

void	ft_fill_malloc_value(char *dict_content, t_numbers *numbers)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 31)
	{
		while (dict_content[j] != '\n' && dict_content[j] != '\0')
		{
			if (dict_content[j] >= '0' && dict_content[j] <= '9')
				k++;
			j++;
		}
		numbers[i].value = (char *)malloc(sizeof(char) * k + 1);
		if (dict_content[j] == '\n')
			j++;
		k = 0;
		i++;
	}
}

void	ft_fill_name(char *dict_content, t_numbers *numbers)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	ft_fill_malloc_name(dict_content, numbers);
	while (i <= 31)
	{
		while (dict_content[j] != '\n' && dict_content[j] != '\0')
		{	
			if (dict_content[j] >= 'a' && dict_content[j] <= 'z')
			{
				numbers[i].name[k] = dict_content[j];
				k++;
			}
			j++;
		}
		if (dict_content[j] == '\n')
			j++;
		k = 0;
		i++;
	}
}

void	ft_fill_value(char *dict_content, t_numbers *numbers)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	ft_fill_malloc_value(dict_content, numbers);
	while (i <= 31)
	{
		while (dict_content[j] != '\n' && dict_content[j] != '\0')
		{
			if (dict_content[j] >= '0' && dict_content[j] <= '9')
			{
				numbers[i].value[k] = dict_content[j];
				k++;
			}
			j++;
		}
		numbers[i].value[k] = '\0';
		if (dict_content[j] == '\n')
			j++;
		k = 0;
		i++;
	}
}
