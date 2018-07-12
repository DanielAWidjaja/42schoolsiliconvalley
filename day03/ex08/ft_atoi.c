/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 14:10:12 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/22 23:19:15 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_num(char c)
{
	int ret;

	ret = 0;
	if ('0' <= c && c <= '9')
	{
		ret = 1;
	}
	return (ret);
}

int	ft_atoi(char *str)
{
	int i;
	int ret;
	int sign;

	i = 0;
	ret = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!check_num(str[i]))
		{
			ret = 0;
			break ;
		}
		ret *= 10;
		ret += str[i++] - '0';
	}
	if (ret != 0)
		ret *= sign;
	return (ret);
}
