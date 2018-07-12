/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:41:16 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/28 17:01:30 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ws(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

int		cnt_words(char *str)
{
	int ret;
	int i;

	ret = 0;
	i = 0;
	while (str[i])
	{
		if (!ws(str[i]) && (str[i + 1] == '\0' || !!ws(str[i + 1])))
			ret++;
		i++;
	}
	return (ret);
}

void	*ft_strcpy(char *dest, int now, int len, char *src)
{
	int i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i + now];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(int now, int len, char *src)
{
	int		i;
	char	*ret;

	ret = (char *)malloc(len + 1);
	ft_strcpy(ret, now, len, src);
	return (ret);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		ctr;
	char	**ret;
	char	*tmp;

	ctr = cnt_words(str);
	i = 0;
	ret = (char **)malloc(sizeof(char *) * ctr);
	ctr = 0;
	j = 0;
	while (str[i])
	{
		if (!ws(str[i]) && (str[i + 1] == '\0' || !!ws(str[i + 1])))
		{
			ret[ctr] = (char *)malloc(sizeof(char ) * (++j + 1));
			ret[ctr++] = ft_strdup(i - j + 1, j, str);
			j = 0;
		}
		else if (!ws(str[i]))
			j++;
		i++;
	}
	ret[ctr] = 0;
	return (ret);
}
