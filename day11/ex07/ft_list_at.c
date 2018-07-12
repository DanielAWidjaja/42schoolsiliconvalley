/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:13:29 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 23:13:31 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*now;
	unsigned int	i;

	i = 0;
	now = begin_list;
	while (i < nbr && now)
	{
		i++;
		now = now->next;
	}
	return (now);
}
