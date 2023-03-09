/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 07:10:15 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/09 07:19:47 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int	size;

	size = argc - 1;
	while (size > 0)
	{
		ft_putstr(argv[size]);
		size --;
	}
	return (0);
}
