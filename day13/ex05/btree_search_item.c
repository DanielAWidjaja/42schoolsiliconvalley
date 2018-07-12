/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 22:41:11 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/06 22:41:13 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
						int (*cmpf)(void *, void *))
{
	void *tmp;

	if (root == NULL)
		return (NULL);
	tmp = btree_search_item(root->left, data_ref, cmpf);
	if (tmp)
		return (tmp);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	tmp = btree_search_item(root->right, data_ref, cmpf);
	if (tmp)
		return (tmp);
	return (NULL);
}
