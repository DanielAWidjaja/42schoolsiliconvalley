/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 02:56:41 by ihuang            #+#    #+#             */
/*   Updated: 2018/07/01 02:57:34 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALID_CHECK_H
# define VALID_CHECK_H

# include <unistd.h>

int		valid(char **tab)
{
	int i;
	int j;
	int check[10];
	int sum;

	i = 0;
	while (i < 9)
	{
		j = 1;
		while (j <= 9)
			check[j++] = 0;
		j = 0;
		sum = 0;
		while (j < 9)
			check[tab[i][j++] - '0'] = 1;
		j = 1;
		while (j <= 9)
			if (check[j++] == 0)
				return (0);
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_column(char **tab)
{
	int i;
	int j;
	int check[10];
	int sum;

	i = 0;
	while (i < 9)
	{
		j = 1;
		while (j <= 9)
			check[j++] = 0;
		j = 1;
		sum = 0;
		while (j <= 9)
			check[tab[j++][i] - '0'] += 1;
		j = 1;
		while (j <= 9)
			if (check[j++] >= 2)
				return (0);
		i++;
	}
	return (1);
}

int		check_box(char **tab)
{
	int i;
	int j;
	int check[10];

	i = 0;
	while (i < 9)
	{
		j = 1;
		while (j <= 9)
			check[j++] = 0;
		j = 0;
		while (j < 9)
		{
			check[tab[(i % 3) * 3 + (j % 3) + 1][i / 3 * 3 + j / 3] - '0'] += 1;
			j++;
		}
		j = 1;
		while (j <= 9)
			if (check[j++] >= 2)
				return (0);
		i++;
	}
	return (1);
}

int		valid_board(char **argv)
{
	int i;
	int j;
	int check[10];

	i = 1;
	while (argv[i])
		if (ft_strlen(argv[i++]) != 9)
			return (0);
	i = 1;
	while (i <= 9)
	{
		j = 9;
		while (j >= 1)
			check[j--] = 0;
		while (j < 9)
			check[argv[i][j++] - '0'] += 1;
		j = 1;
		while (j <= 9)
			if (check[j++] >= 2)
				return (0);
		i++;
	}
	if (check_column(argv) && check_box(argv))
		return (1);
	return (0);
}

#endif
