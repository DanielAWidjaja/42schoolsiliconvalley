/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 00:28:04 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/29 00:28:06 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	 time(int now)
{
	if (now % 12 == 0)
		return (12);
	return (now % 12);
}

void	ampm(int now)
{
	if (1 <= now && now <= 12 || now == 24)
		printf("A.M.");
	else
		printf("P.M.");
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 ", time(hour));
	ampm(hour);
	printf(" AND %d.00 ", time(hour + 1));
	ampm(hour + 1);
	printf("\n");
}
