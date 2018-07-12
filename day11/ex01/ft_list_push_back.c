/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:33:30 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 22:34:49 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	last = *begin_list;
	while (last->next)
		last = last->next;
	last->next = ft_create_elem(data);
}
