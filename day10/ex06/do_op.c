/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 15:54:06 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/03 20:23:36 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		white_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
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
	while ('0' <= str[i] && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i++] - '0';
	}
	return (sign * ret);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb >= -9)
		{
			c = '0' - nb;
			write(1, &c, 1);
			return ;
		}
		ft_putnbr(-(nb / 10));
		c = '0' + ((10 - (nb % 10)) % 10);
		write(1, &c, 1);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = ((nb % 10) + '0');
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][0] == '+')
		ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
	else if (argv[2][0] == '-')
		ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	else if (argv[2][0] == '/')
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	else if (argv[2][0] == '*')
		ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
	else if (argv[2][0] == '%')
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
