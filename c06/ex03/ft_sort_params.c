/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 07:18:42 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/12 23:27:06 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i ++;
	}
	write (1, "\n", 1);
}

int	valeur_acsii(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] > str2[i])
			return (1);
		if (str1[i] < str2[i])
			return (0);
	}
	return (0);
}

void	ft_swap(char **tab1, char **tab2)
{
	char	*temp;

	temp = *tab1;
	*tab1 = *tab2;
	*tab2 = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	size;

	i = 1;
	size = argc;
	if (argc < 2)
		return (0);
	while (size > 0)
	{
		while (i < size - 1)
		{
			if (valeur_acsii(argv[i], argv[i + 1]) == 1)
				ft_swap(&argv[i], &argv[i + 1]);
			i ++;
		}
		size --;
		i = 1;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i ++;
	}
	return (0);
}
