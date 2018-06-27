/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 03:24:56 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 03:34:49 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		up_case(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	low(char c)
{
	return (c + 'a' - 'A');
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (up_case(str[i]))
			str[i] = low(str[i]);
		i++;
	}
	return (str);
}
