/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 00:59:48 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/28 14:37:51 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int ctr;
	int *ret;

	if (min < max)
	{
		ret = (int *)malloc(max - min);
	}
	else
	{
		*range = NULL;
		return (0);
	}
	ctr = min;
	i = 0;
	while (ctr < max)
	{
		ret[i++] = ctr++;
	}
	*range = ret;
	return (i);
}
