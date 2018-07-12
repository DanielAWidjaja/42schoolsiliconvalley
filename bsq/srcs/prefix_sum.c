/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix_sum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:47:48 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/11 23:02:09 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		get_val(int **grid, int i, int j)
{
	if (i < 0 || j < 0 || !grid[i] || grid[i][j] == -1)
		return (0);
	return (grid[i][j]);
}

int		check_ps(int **grid, int i, int j, int sz)
{
	if (sz <= 0)
		return (0);
	return (get_val(grid, i + sz - 1, j + sz - 1) + get_val(grid, i - 1, j - 1)
			- get_val(grid, i + sz - 1, j - 1)
			- get_val(grid, i - 1, j + sz - 1));
}

int		**make_ps(int **grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j] != -1)
		{
			grid[i][j] += get_val(grid, i, j - 1) + get_val(grid, i - 1, j)
						- get_val(grid, i - 1, j - 1);
			j++;
		}
		i++;
	}
	return (grid);
}

int		**decode_ps(int **grid)
{
	int i;
	int j;
	int co;

	co = cnt_col(grid);
	i = cnt_row(grid);
	while (--i)
	{
		j = co;
		while (--j)
			grid[i][j] -= (grid[i][j - 1] + grid[i - 1][j]
					- grid[i - 1][j - 1]);
	}
	return (grid);
}
