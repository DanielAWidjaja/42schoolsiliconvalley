/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhayat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 21:35:15 by rhayat            #+#    #+#             */
/*   Updated: 2018/06/24 21:38:20 by rhayat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

void	update00(char *l, char *m, char *r, int sw)
{
	if (sw == 0)
	{
		*l = 'o';
		*m = '-';
		*r = 'o';
	}
	if (sw == 1)
	{
		*l = 'o';
		*m = ' ';
		*r = 'o';
	}
	if (sw == 2)
	{
		*l = 'o';
		*m = '-';
		*r = 'o';
	}
}

int		col_nbr(int cur_box, int ttl_col)
{
	return (cur_box % ttl_col);
}

char	*rush00(int x, int y)
{
	char	l;
	char	m;
	char	r;
	int		cur_box;
	char	*ret;

	cur_box = 0;
	update00(&l, &m, &r, 0);
	ret = (char *)malloc(sizeof(char) * y * (x + 1) + 1);
	while (cur_box < x * y)
	{
		if (col_nbr(cur_box, x) == 0)
			ret[cur_box] = l;
		else if (col_nbr(cur_box, x) == x - 1)
			ret[cur_box] = r;
		else
			ret[cur_box] = m;
		((col_nbr(cur_box, x) == x - 1) ? ret[++cur_box] = '\n' : 0);
		cur_box++;
		if (cur_box == x)
			update00(&l, &m, &r, 1);
		if (cur_box == x * (y - 1))
			update00(&l, &m, &r, 2);
	}
	ret[cur_box] = '\0';
	return (ret);
}
