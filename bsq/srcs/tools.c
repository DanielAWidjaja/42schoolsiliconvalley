/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:41:33 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/11 05:49:34 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_atoi(char *str)
{
	int res;
	int sign;

	while (*str && *str <= ' ' && *str != '\n')
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * sign);
}

int		ft_getheight(char *input)
{
	int res;
	int i;

	res = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '\n')
			res++;
		i++;
	}
	return (res);
}

int		ft_arraylen(char **array)
{
	int res;

	res = 0;
	while (array[res] != 0)
		res++;
	return (res);
}

int		ft_all_different(char a, char b, char c)
{
	if (a <= ' ' || b <= ' ' || c <= ' ')
		return (0);
	return ((a != b) && (b != c) && (a != c));
}
