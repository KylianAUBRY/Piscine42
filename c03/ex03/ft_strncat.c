/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:37:35 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/08 19:34:22 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && nb > 0)
	{
		dest[len + i] = src[i];
		i ++;
		nb --;
	}
	dest[len + i] = '\0';
	return (dest);
}
