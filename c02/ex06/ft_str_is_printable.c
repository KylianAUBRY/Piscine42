/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:24:33 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/05 18:31:56 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comp_affi(char str)
{
	if (str >= 32 && str <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (comp_affi(str[i]) == 1)
			i ++;
		else
			return (0);
	}
	return (1);
}
