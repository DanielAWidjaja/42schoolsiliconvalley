/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 08:26:47 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/06 13:42:44 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putmap(int **map, char obstacle, char full)
{
	char	empty;
	int		i;
	int		j;

	empty = '.';
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 1)
				ft_putchar(empty);
			else if (map[i][j] == 2)
				ft_putchar(obstacle);
			else if (map[i][j] == 3)
				ft_putchar(full);
			else
				ft_putchar('*');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_ans(int **grid, char *symbols)
{
	int i;
	int j;

	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j] != -1)
		{
			if (grid[i][j] == 0)
				ft_putchar(symbols[0]);
			else if (grid[i][j] == 1)
				ft_putchar(symbols[1]);
			else if (grid[i][j] == 2)
				ft_putchar(symbols[2]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
