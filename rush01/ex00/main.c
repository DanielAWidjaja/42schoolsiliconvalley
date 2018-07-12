/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:34:57 by ihuang            #+#    #+#             */
/*   Updated: 2018/07/01 03:09:01 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"
#include "valid_check.h"
#include <stdlib.h>

char	**table_maker(char **argv, int x, char **tab)
{
	int		j;
	int		i;

	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			tab[j][i] = argv[j + x][i];
			i++;
		}
		tab[j][i] = '\0';
		j++;
	}
	return (tab);
}

int		is_safe(char **tab, int x, int y, int nb)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		if (tab[x][i++] == nb + '0')
			return (0);
	}
	while ((i - 9) < 9)
	{
		if (tab[(i++) - 9][y] == nb + '0')
			return (0);
	}
	while ((i - 18) < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (tab[(x / 3) * 3 + (i - 18)][(y / 3) * 3 + (j++)] == nb + '0')
				return (0);
		}
		i++;
	}
	return (1);
}

int		check_end(char **tab, int x, int y, char **sol)
{
	if (x == 9 && y == 8 && valid(tab))
	{
		table_maker(tab, 0, sol);
		return (1);
	}
	return (0);
}

int		solve(char **tab, int x, int y, char **sol)
{
	int i;
	int ret;

	if (check_end(tab, x, y, sol))
		return (1);
	y = (x == 9 ? y + 1 : y);
	x = x % 9;
	if (tab[x][y] != '.')
		return (solve(tab, x + 1, y, sol));
	i = 1;
	ret = 0;
	while (i < 10)
	{
		if (is_safe(tab, x, y, i))
		{
			tab[x][y] = i + '0';
			ret += solve(tab, x + 1, y, sol);
			if (ret >= 2)
				return (ret);
			else
				tab[x][y] = '.';
		}
		i++;
	}
	return (ret);
}

int		main(int argc, char **argv)
{
	char	**tab;
	char	**sol;
	int		i;

	if (argc != 10 || !valid_board(argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	tab = (char**)malloc(sizeof(char*) * 10);
	tab[9] = 0;
	while (i < 9)
		tab[i++] = (char*)malloc(sizeof(char) * 10);
	sol = (char**)malloc(sizeof(char*) * 10);
	sol[9] = 0;
	while (i - 9 < 9)
		sol[i++ - 9] = (char*)malloc(sizeof(char) * 10);
	table_maker(argv, 1, tab);
	table_maker(argv, 1, sol);
	if (solve(tab, 0, 0, sol) == 1)
		display_grid(sol);
	else
		write(1, "Error\n", 6);
	return (0);
}
