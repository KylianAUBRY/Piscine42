/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:57:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 18:23:16 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comp_alpha_maj(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_alpha_maj(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}
