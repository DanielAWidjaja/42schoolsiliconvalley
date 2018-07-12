/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inout.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:16:08 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/08 20:16:10 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "eval_expr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb >= -9)
		{
			ft_putchar('0' - nb);
			return ;
		}
		ft_putnbr(-(nb / 10));
		ft_putchar('0' + ((10 - (nb % 10)) % 10));
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int		ws(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		is_digit(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char **str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while (!!ws(**str))
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	while (!!is_digit(**str) || ws(**str))
	{
		if (ws(**str))
			(*str)++;
		else
		{
			ret = ret * 10 + **str - '0';
			(*str)++;
		}
	}
	return (sign * ret);
}
