/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:12:08 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 16:48:41 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comp_num(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_num(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}
