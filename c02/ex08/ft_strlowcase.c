/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:59:33 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/06 20:46:35 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comp_alpha_maj(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (comp_alpha_maj(str[i]) == 1)
			str[i] = str[i] + 32;
		i ++;
	}
	return (str);
}
