/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_var.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:23:13 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/11 16:23:15 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_var	*create_t_var(int a, int b, int c)
{
	t_var *ret;

	ret = (t_var *)malloc(sizeof(t_var));
	ret->r = a;
	ret->c = b;
	ret->sz = c;
	return (ret);
}

void	replace(t_var **x, int a, int b, int c)
{
	if ((*x)->sz > c)
		return ;
	else if ((*x)->sz < c)
	{
		(*x)->r = a;
		(*x)->c = b;
		(*x)->sz = c;
	}
	else if ((*x)->r < a)
		return ;
	else if ((*x)->r > a)
	{
		(*x)->r = a;
		(*x)->c = b;
		(*x)->sz = c;
	}
	else if ((*x)->c <= b)
		return ;
	else if ((*x)->c > b)
	{
		(*x)->r = a;
		(*x)->c = b;
		(*x)->sz = c;
	}
}
