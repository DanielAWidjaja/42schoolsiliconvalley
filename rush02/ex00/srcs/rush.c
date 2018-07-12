/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 22:47:51 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/08 22:47:52 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb >= -9)
		{
			ft_putchar('0' - nb);
			return ;
		}
		ft_putnbr(-(nb / 10));
		ft_putchar('0' + ((10 - (nb % 10)) % 10));
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int		ft_cmp(char *a, char *b)
{
	int i;

	i = 0;
	while (a[i] || b[i])
	{
		if (a[i] != b[i])
			return (0);
		i++;
	}
	if (a[i] != '\0' || b[i] != '\0')
		return (0);
	return (1);
}

int		cnt_rows(char *str)
{
	int	i;
	
	i = 0;
	while (*str)
	{
		if (*str == '\n')
			i++;
		str++;
	}
	return (i);
}

int		cnt_cols(char *str)
{
	int i;
	
	i = 0;
	while (*str != '\n' && *str)
	{
		str++;
		i++;
	}
	return (i);
}

void	print_format(char num, int rows, int cols, int done)
{
	if (done > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	write(1, &num, 1);
	write(1, "] [", 3);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
}
