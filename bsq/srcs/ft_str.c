/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 08:33:03 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/11 05:50:17 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strlen(char *str)
{
	int res;

	res = 0;
	while (str[res])
		res++;
	return (res);
}

int		ft_linelen(char *str, int i)
{
	int res;

	res = 0;
	while (str[res + i] && str[res + i] != '\n')
	{
		res++;
	}
	if (str[res + i] == '\n')
		res++;
	return (res);
}

char	*ft_cutstr(char *str, int i, int len)
{
	char	*res;
	int		itt;

	res = (char *)malloc(sizeof(char) * (len + 1));
	itt = 0;
	while (itt < len && str[i + itt])
	{
		res[itt] = str[i + itt];
		itt++;
	}
	res[itt] = '\0';
	return (res);
}

char	*ft_getline(char *str, int i)
{
	char	*res;
	int		len;
	int		itt;

	len = ft_linelen(str, i);
	res = (char *)malloc(sizeof(char) * (len + 1));
	itt = 0;
	while (itt < len)
	{
		res[itt] = str[i + itt];
		itt++;
	}
	res[len] = '\0';
	return (res);
}
