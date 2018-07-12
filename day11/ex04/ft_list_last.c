/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:51:48 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 22:51:50 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *now;

	if (begin_list == NULL)
		return (NULL);
	now = begin_list;
	while (now->next != NULL)
		now = now->next;
	return (now);
}
