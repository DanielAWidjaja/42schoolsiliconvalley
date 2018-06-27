/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 04:24:51 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 04:26:38 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	low(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		if (!low(str[i++]))
			return (0);
	return (1);
}
