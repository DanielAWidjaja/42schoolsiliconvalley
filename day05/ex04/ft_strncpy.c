/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:11:16 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 01:12:58 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				end;

	end = 0;
	i = 0;
	while (i < n)
	{
		if (end == 1 || src[i] == '\0')
		{
			end = 1;
			dest[i] = '\0';
			i++;
			continue;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
