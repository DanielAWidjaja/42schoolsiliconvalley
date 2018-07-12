/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 00:02:50 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/04 00:02:52 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *prev;
	t_list *now;
	t_list *tmp;
	t_list *ctr;

	ctr = *begin_list;
	if (!*begin_list)
		return ;
	while (ctr)
	{
		now = *begin_list;
		while (now && now->next)
		{
			if (cmp(now->data, now->next->data) > 0)
				swap(*prev, *now, *now->next);
		}
		ctr = ctr->next;
	}
}
