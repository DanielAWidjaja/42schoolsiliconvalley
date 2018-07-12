/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 21:22:46 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/24 21:23:37 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

void	update02(char *l, char *m, char *r, int sw)
{
	if (sw == 0)
	{
		*l = 'A';
		*m = 'B';
		*r = 'A';
	}
	if (sw == 1)
	{
		*l = 'B';
		*m = ' ';
		*r = 'B';
	}
	if (sw == 2)
	{
		*l = 'C';
		*m = 'B';
		*r = 'C';
	}
}

char	*rush02(int x, int y)
{
	char	l;
	char	m;
	char	r;
	int		cur_box;
	char	*ret;

	cur_box = 0;
	update02(&l, &m, &r, 0);
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
			update02(&l, &m, &r, 1);
		if (cur_box == x * (y - 1))
			update02(&l, &m, &r, 2);
	}
	ret[cur_box] = '\0';
	return (ret);
}
