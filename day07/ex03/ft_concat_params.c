/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:00:06 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/28 19:35:16 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cnt(int argc, char **argv)
{
	int		i;
	int		j;
	int		ret;

	i = 1;
	ret = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
			ret++;
		}
		i++;
	}
	return (ret);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		ctr;
	int		i;
	int		j;
	int		c;
	char	*ret;

	ctr = cnt(argc, argv);
	ret = malloc(sizeof(char) * (ctr + argc));
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ret[c++] = argv[i][j++];
		}
		ret[c++] = '\n';
		i++;
	}
	ret[c - 1] = '\0';
	return (ret);
}
