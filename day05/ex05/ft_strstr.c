/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 01:21:54 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 02:16:38 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;
	int		i;
	int		j;
	int		check;

	i = 0;
	tmp = str;
	while (str[i] != '\0' && str[i + ft_strlen(to_find)] != '\0')
	{
		j = 0;
		check = 1;
		while (j < ft_strlen(to_find))
		{
			if (to_find[j] != str[i + j])
				check = 0;
			j++;
		}
		if (check)
			return (tmp);
		tmp++;
		i++;
	}
	return (0);
}
