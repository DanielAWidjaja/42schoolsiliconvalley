/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:06:38 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 22:08:14 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *ret;

	ret = (t_list *)malloc(sizeof(t_list));
	ret->next = NULL;
	ret->data = data;
	return (ret);
}
