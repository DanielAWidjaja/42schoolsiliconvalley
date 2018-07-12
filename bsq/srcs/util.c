/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:16:08 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/08 20:16:10 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	cnt_row(int **grid)
{
	int i;

	i = 0;
	while (grid[i])
		i++;
	return (i);
}

int	cnt_col(int **grid)
{
	int j;

	j = 0;
	while (grid[0][j] != -1)
		j++;
	return (j);
}
