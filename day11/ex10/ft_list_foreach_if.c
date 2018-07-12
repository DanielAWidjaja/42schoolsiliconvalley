/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:42:45 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 23:42:47 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f) (void *),
		void *data_ref, int (*cmp) ())
{
	t_list *now;

	now = begin_list;
	while (now)
	{
		if (cmp(now->data, data_ref) == 0)
			f(now->data);
		now = now->next;
	}
}
