/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:57:58 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/08 19:27:19 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + i2] && str[i + i2] == to_find[i2] && to_find[i2] != '\0')
			i2 ++;
		if (to_find[i2] == '\0')
			return (str + i);
		i++;
		i2 = 0;
	}
	return (0);
}
