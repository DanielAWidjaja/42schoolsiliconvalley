/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:59:46 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 23:59:47 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *now;

	now = *begin_list1;
	if (now)
	{
		while (now->next)
			now = now->next;
		now->next = begin_list2;
	}
	else
	{
		*begin_list1 = begin_list2;
	}
}
