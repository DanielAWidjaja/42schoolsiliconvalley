/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:55:48 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/11 00:34:12 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_var	*take_min(int **grid, int si, int sj, int st)
{
	int		co;
	int		ro;
	int		sz;
	t_var	*ans;

	co = cnt_col(grid);
	ro = cnt_row(grid);
	sz = st - 1;
	ans = create_t_var(si, sj, 0);
	while (si + sz - 1 < ro && sj + sz - 1 < co)
	{
		while (check_ps(grid, si, sj, sz) && sz >= 0)
		{
			si++;
			sj++;
			sz--;
		}
		if (sz > ans->sz)
			replace(&ans, si, sj, sz);
		sz++;
	}
	return (ans);
}

int		**solve(int **grid)
{
	int		i;
	int		j;
	t_var	*now;
	t_var	*tmp;

	i = 0;
	j = 0;
	tmp = (t_var *)malloc(sizeof(t_var));
	now = (t_var *)malloc(sizeof(t_var));
	while (grid[i][j] != -1)
	{
		tmp = take_min(grid, i, j++, now->sz);
		replace(&now, tmp->r, tmp->c, tmp->sz);
	}
	j = 0;
	while (grid[i])
	{
		tmp = take_min(grid, i++, j, now->sz);
		replace(&now, tmp->r, tmp->c, tmp->sz);
	}
	return (make_grid(decode_ps(grid), now));
}
