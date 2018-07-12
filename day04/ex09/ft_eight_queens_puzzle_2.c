/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 18:13:43 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/23 20:44:35 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_pos(int x)
{
	if (x > 9)
		write_pos(x / 10);
	ft_putchar('0' + x % 10);
}

int		mdfy(int now, int add, int dir)
{
	if (dir == 1)
		return ((now | (1 << add)) >> 1);
	return ((now | (1 << add)) << 1);
}

void	queens(int now, int l_top, int r_top)
{
	int i;
	int top;
	int tmp;

	i = 1;
	top = 0;
	tmp = now;
	while (tmp > 0)
	{
		top |= (1 << (tmp % 10));
		tmp /= 10;
	}
	if (top == (1 << 9) - 2)
	{
		write_pos(now);
		if (now != 84136275)
			ft_putchar('\n');
		return ;
	}
	while (i <= 8)
	{
		if (((top | l_top | r_top) & (1 << i)) == 0)
			queens(now * 10 + i, mdfy(l_top, i, 1), mdfy(r_top, i, -1));
		i++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	queens(0, 0, 0);
}
