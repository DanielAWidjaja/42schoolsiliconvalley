/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:54:06 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 23:54:08 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *last;
	t_list *now;
	t_list *fs;

	now = *begin_list;
	last = NULL;
	fs = NULL;
	while (now)
	{
		if (cmp(now->data, data_ref) != 0)
		{
			if (last == NULL)
			{
				fs = now;
				last = now;
			}
			else
			{
				last->next = now;
				last = now;
			}
		}
		now = now->next;
	}
	*begin_list = fs;
}
