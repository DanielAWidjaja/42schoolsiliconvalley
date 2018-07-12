/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:53:01 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/11 23:00:43 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		verify_line(char *line, char *symbols, int len)
{
	int i;

	i = 0;
	while (i < len - 1)
	{
		if ((line[i] != symbols[0]) && (line[i] != symbols[1]))
			return (0);
		i++;
	}
	if ((line[len - 1] != '\n') || (line[len] != '\0'))
		return (0);
	return (1);
}

int		verify_topline(char *str)
{
	int skip;

	if (ft_atoi(str) <= 0)
		return (0);
	skip = skip_digits(str, 0);
	if (ft_strlen(str) < skip + 3)
		return (0);
	if (!ft_all_different(str[skip], str[skip + 1], str[skip + 2]))
		return (0);
	skip = skip_blank(str, skip + 3);
	if (str[skip] != '\0')
		return (0);
	return (1);
}

int		verify_file(char *str)
{
	char	**table;
	char	*symbols;
	int		height;
	int		width;

	table = ft_splitline(str);
	height = ft_arraylen(table) - 1;
	if (!*table || !verify_topline(*table) || (ft_atoi(*table) != height))
		return (0);
	symbols = ft_cutstr(str, skip_digits(*table, 0), 2);
	table++;
	width = ft_strlen(*table);
	while (*table)
	{
		if (!verify_line(*table, symbols, width))
			return (0);
		table++;
	}
	return (1);
}
