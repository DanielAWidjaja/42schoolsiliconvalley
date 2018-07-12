/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 03:35:56 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 03:57:06 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		alpha_num(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
			|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}

char	up(char c)
{
	if ('a' <= c && c <= 'z')
		return (c + 'A' - 'a');
	return (c);
}

char	try_low(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (is_low(str[0]))
		str[0] = up(str[0]);
	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		if (!alpha_num(str[i]) && is_low(str[i + 1]))
			str[i + 1] = up(str[i + 1]);
		if (alpha_num(str[i]) && alpha_num(str[i + 1]))
			str[i + 1] = try_low(str[i + 1]);
		i++;
	}
	return (str);
}
