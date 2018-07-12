/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:03:17 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/28 23:03:19 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

char	**ft_split_whitespaces(char *str);

void	ft_putstr(char *str)
{
	char *i;

	i = str;
	while (*i)
	{
		ft_putchar(*i);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;
	char	**tmp;

	i = 0;
	while (tab[i])
	{
		tmp = ft_split_whitespaces(tab[i]);
		j = 0;
		while (tmp[j])
		{
			ft_putstr(tmp[j++]);
			ft_putchar('\n');
		}
		i++;
	}
}
