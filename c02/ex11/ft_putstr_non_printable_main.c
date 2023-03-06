/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_main.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:20:06 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/06 00:30:00 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_exa(char c)
{
	char	*exa;

	exa = "0123456789qbcdef";
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

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	char	str1[] = "42 \r c'est coOl";
	char	str2[] = "Je test mes fonction.,/;'[]}{:<>?";
	char	str3[] = "\fde nouveau un test 1234567890!@#$%^&*()_";
	char	str4[] = "et\v encore\b un \atest\\";	

	ft_putstr_non_printable(str);
	printf("\n");
	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
	printf("\n");
	ft_putstr_non_printable(str3);
	printf("\n");
	ft_putstr_non_printable(str4);
	return (0);
}
