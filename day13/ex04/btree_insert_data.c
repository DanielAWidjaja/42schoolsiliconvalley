/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 22:32:32 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/06 22:32:34 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item);

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (*root == NULL)
	{
		*root = btree_create_node(item);
	}
	else
	{
		if (cmpf((*root)->item, item) < 0)
		{
			if ((*root)->left)
				btree_insert_data(&(*root)->left, item, cmpf);
			else
				(*root)->left = btree_create_node(item);
		}
		else
		{
			if ((*root)->right)
				btree_insert_data(&(*root)->right, item, cmpf);
			else
				(*root)->right = btree_create_node(item);
		}
	}
}
