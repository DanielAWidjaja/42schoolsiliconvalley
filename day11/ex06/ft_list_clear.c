/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:06:11 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 23:06:13 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	while (*begin_list)
	{
		tmp = *begin_list;
		free(*begin_list);
		*begin_list = tmp->next;
	}
	*begin_list = NULL;
}
