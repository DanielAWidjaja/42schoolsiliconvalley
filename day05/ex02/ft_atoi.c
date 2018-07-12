/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:20:25 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/25 23:43:23 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	white_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	is_digit(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int ret;
	int sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (!!white_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (!!is_digit(str[i]))
	{
		ret *= 10;
		ret += str[i++] - '0';
	}
	return (sign * ret);
}
