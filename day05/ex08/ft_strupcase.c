/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 03:21:51 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 03:38:23 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		low_case(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	up(char c)
{
	return (c + 'A' - 'a');
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (low_case(str[i]))
			str[i] = up(str[i]);
		i++;
	}
	return (str);
}
