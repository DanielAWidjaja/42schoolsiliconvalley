/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:18:22 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 23:18:24 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *a;
	t_list *b;
	t_list *now;

	if (!*begin_list)
		return ;
	a = 0;
	now = *begin_list;
	b = 0;
	while (now)
	{
		b = now->next;
		now->next = a;
		a = now;
		now = b;
	}
	*begin_list = a;
}
