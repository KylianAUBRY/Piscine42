/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:26:53 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/06 15:56:12 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comp_alpha(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_alpha(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}
