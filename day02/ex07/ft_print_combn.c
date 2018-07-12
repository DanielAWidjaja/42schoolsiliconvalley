/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:41:04 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/21 23:01:14 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		own_pow(int a, int b)
{
	int ret;

	if (b == 0)
	{
		return (1);
	}
	if (b == 1)
	{
		return (a);
	}
	ret = own_pow(a, b / 2);
	ret *= ret;
	if (b % 1 == 1)
	{
		ret *= a;
	}
	return (ret);
}

int		check_now(int num, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		if (((num / own_pow(10, i)) % 10) <= (num / own_pow(10, i + 1) % 10))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	write_output(int num, int n)
{
	int i;

	i = n - 1;
	if (num % 10 != n - 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (i >= 0)
	{
		ft_putchar('0' + ((num / own_pow(10, i)) % 10));
		i--;
	}
}

void	bottom_up(int maxi, int n)
{
	int now;

	now = 0;
	while (now < maxi)
	{
		if (!!check_now(now, n))
		{
			write_output(now, n);
		}
		now++;
	}
}

void	ft_print_combn(int n)
{
	int maxi;
	int i;

	maxi = 1;
	i = 1;
	while (i <= n)
	{
		maxi *= 10;
		i++;
	}
	bottom_up(maxi, n);
}
