/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:14:10 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 20:17:29 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

int	comp_alpha_num(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (2);
	else if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (comp_alpha_num(str[i - 1]) == 0 && comp_alpha_num(str[i]) == 2)
			str[i] = str[i] - 32;
		i --;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarente-deux; cinquante+et+un \n";
	char	str2[] = "42la vie. \n";
	char	str3[] = "\n ca vas vous? \n";
	char	str4[] = "sI j'eCrIt coMMe Ca c'eSt oK? \n";
	char	str5[] = "PoUrQuoi 42?";

	printf ("%s", ft_strcapitalize(str));
	printf ("%s", ft_strcapitalize(str2));
	printf ("%s", ft_strcapitalize(str3));
	printf ("%s", ft_strcapitalize(str4));
	printf ("%s", ft_strcapitalize(str5));
	return (0);
}
