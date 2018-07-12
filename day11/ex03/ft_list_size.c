/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:49:30 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 22:49:33 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		ret;
	t_list	*now;

	ret = 0;
	now = begin_list;
	while (now)
	{
		ret++;
		now = now->next;
	}
	return (ret);
}
