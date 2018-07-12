/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 15:18:42 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/02 15:22:00 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int len, int (*f) (int))
{
	int i;
	int *ret;

	ret = (int *)malloc(sizeof(int) * len + 1);
	i = 0;
	while (i < len)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
