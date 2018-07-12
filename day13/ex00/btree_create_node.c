/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 22:13:44 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/06 22:13:46 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *ret;

	ret = (t_btree *)malloc(sizeof(t_btree));
	ret->left = NULL;
	ret->right = NULL;
	ret->item = item;
	return (ret);
}
