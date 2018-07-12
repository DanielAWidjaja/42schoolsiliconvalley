/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:55:27 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 22:55:29 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*now;
	t_list	*tmp;
	int		i;

	i = 0;
	now = NULL;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = now;
		now = tmp;
		i++;
	}
	return (now);
}
