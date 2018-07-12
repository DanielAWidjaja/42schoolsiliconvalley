/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 22:48:28 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/06 22:48:31 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

int	max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int	btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	return (max(btree_level_count(root->left), btree_level_count(root->right)));
}
