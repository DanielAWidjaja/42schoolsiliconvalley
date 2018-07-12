/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 02:22:11 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/23 20:06:37 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int mask, int x)
{
	return (mask & (1 << (x)));
}

int	mdfy(int now, int add, int dir)
{
	if (dir == 1)
		return ((now | (1 << add)) >> 1);
	return ((now | (1 << add)) << 1);
}

int	queens(int now, int l_top, int r_top)
{
	int i;
	int ret;
	int top;
	int tmp;

	i = 1;
	top = 0;
	tmp = now;
	ret = 0;
	while (tmp > 0)
	{
		top |= (1 << (tmp % 10));
		tmp /= 10;
	}
	if (top == (1 << 9) - 2)
		return (1);
	while (i <= 8)
	{
		if (check(top | l_top | r_top, i) == 0)
		{
			ret += queens(now * 10 + i, mdfy(l_top, i, 1), mdfy(r_top, i, -1));
		}
		i++;
	}
	return (ret);
}

int	ft_eight_queens_puzzle(void)
{
	return (queens(0, 0, 0));
}
