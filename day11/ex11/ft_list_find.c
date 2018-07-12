/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:52:03 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 23:52:04 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *now;

	now = begin_list;
	while (now)
	{
		if (cmp(now->data, data_ref) == 0)
			return (now);
		now = now->next;
	}
	return (0);
}
