/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 00:46:19 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/28 15:47:31 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int ctr;
	int *ret;

	if (max <= min)
		return (0);
	ret = (int *)malloc(max - min);
	ctr = min;
	i = 0;
	while (ctr < max)
	{
		ret[i++] = ctr++;
	}
	return (ret);
}
