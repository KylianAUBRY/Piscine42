/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:00:43 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/08 19:21:50 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i ++;
	}
	if (s1[i - 1] == '\0' && s2 [i - 1] == '\0' && (i - 1) > 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
