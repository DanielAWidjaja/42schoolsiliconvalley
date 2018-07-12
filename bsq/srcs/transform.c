/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 00:36:21 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/11 11:14:29 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_splitline(char *str)
{
	char	**res;
	int		height;
	int		i;
	int		j;

	height = ft_getheight(str);
	res = (char **)malloc(sizeof(char *) * (height + 1));
	j = 0;
	i = 0;
	while (j < height)
	{
		res[j] = ft_getline(str, i);
		i = skip_line(str, i);
		j++;
	}
	res[height] = 0;
	return (res);
}

int		ft_char_conversion(char c, char *symbols)
{
	int res;

	if (c == symbols[0])
		res = 0;
	else if (c == symbols[1])
		res = 1;
	else if (c == symbols[2])
		res = 2;
	else
		res = -1;
	return (res);
}

int		**ft_conversion(char **input, char *symbols, int width, int height)
{
	int		**res;
	int		i;
	int		j;

	input++;
	res = (int **)malloc(sizeof(int *) * (height + 1));
	i = 0;
	while (i < height)
	{
		res[i] = (int *)malloc(sizeof(int) * (width + 1));
		j = 0;
		while (j < width)
		{
			res[i][j] = ft_char_conversion(input[i][j], symbols);
			j++;
		}
		res[i][j] = -1;
		i++;
	}
	res[i] = NULL;
	return (res);
}

int		**ft_transform(char *input)
{
	char	**lines;
	char	*symbols;
	int		width;
	int		height;

	lines = ft_splitline(input);
	symbols = ft_cutstr(input, skip_digits(input, 0), 3);
	width = ft_strlen(lines[1]) - 1;
	height = ft_atoi(lines[0]);
	return (ft_conversion(lines, symbols, width, height));
}
