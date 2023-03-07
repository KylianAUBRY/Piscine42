/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:20:06 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/06 22:24:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_exa(char c)
{
	char	*exa;

	exa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(exa[c / 16]);
	ft_putchar(exa[c % 16]);
}

int	comp_affi(char str)
{
	if (str >= 32 && str <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (comp_affi(str[i]) == 1)
			ft_putchar(str[i]);
		else
			put_exa(str[i]);
		i ++;
	}
}
