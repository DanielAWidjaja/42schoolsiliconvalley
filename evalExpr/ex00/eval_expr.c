/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:05:52 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/07 16:05:53 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int	get_num(char **str)
{
	int x;

	while (ws(**str))
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		x = calc(str, 0);
		if (**str == ')')
			(*str)++;
		return (x);
	}
	return (ft_atoi(str));
}

int	calc(char **str, int pr)
{
	int		a;
	int		b;
	char	c;

	a = ((pr == 1) ? get_num(str) : calc(str, 1));
	while (**str)
	{
		while (ws(**str))
			(*str)++;
		c = **str;
		if ((c != '/' && c != '*' && c != '%' && pr == 1) ||
		(c != '+' && c != '-' && pr == 0))
			return (a);
		(*str)++;
		b = ((pr == 1) ? get_num(str) : calc(str, 1));
		((c == '/' && pr == 1) ? a /= b : 0);
		((c == '*' && pr == 1) ? a *= b : 0);
		((c == '%' && pr == 1) ? a %= b : 0);
		((c == '+' && pr == 0) ? a += b : 0);
		((c == '-' && pr == 0) ? a -= b : 0);
	}
	return (a);
}

int	eval_expr(char *str)
{
	return (calc(&str, 0));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
