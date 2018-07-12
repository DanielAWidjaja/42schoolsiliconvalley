/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 06:31:39 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 06:37:15 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	min(unsigned int a, unsigned int b)
{
	return ((a < b) ? a : b);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size == 0)
		i = min(ft_strlen(src), ft_strlen(dest));
	dest[i] = '\0';
	return (ft_strlen(src));
}
