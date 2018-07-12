/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:03:38 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/24 22:24:05 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	mult_write(char c, int num)
{
	int i;

	i = 0;
	while (i < num)
	{
		ft_putchar(c);
		i++;
	}
}

int		cnt(int x, int type)
{
	if (type == 1)
		return (x * x + 9 * x - 5);
	if (type == 2)
		return (4 * (x - 1) + (x * (x - 1)) / 2);
	return (x - 1 + (x & 1));
}

void	make_door(int lvl)
{
	int i;

	i = 0;
	while (i < lvl + 2)
	{
		mult_write(' ', (lvl + 1 - i));
		mult_write('/', 1);
		mult_write('*', (cnt(lvl, 2) + i - ((cnt(lvl, 3) - 1) / 2)));
		if (i < 3 - (lvl & 1))
			mult_write('*', cnt(lvl, 3));
		else if (i == lvl + 1 - (lvl - 1) / 2 && lvl >= 5)
		{
			mult_write('|', cnt(lvl, 3) - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			mult_write('|', cnt(lvl, 3));
		mult_write('*', (cnt(lvl, 2) + i - ((cnt(lvl, 3) - 1) / 2)));
		mult_write('\\', 1);
		mult_write(' ', (lvl + 1 - i++));
		ft_putchar('\n');
	}
}

void	make_floor(int lvl, int ttl)
{
	int i;

	if (lvl == 0)
		return ;
	make_floor(lvl - 1, ttl);
	if (lvl == ttl)
	{
		make_door(lvl);
		return ;
	}
	i = 0;
	while (i < lvl + 2)
	{
		mult_write(' ', ((cnt(ttl, 1) - cnt(lvl, 1)) / 2 + lvl + 1 - i));
		mult_write('/', 1);
		mult_write('*', (cnt(lvl, 2) + i) * 2 + 1);
		mult_write('\\', 1);
		mult_write(' ', ((cnt(ttl, 1) - cnt(lvl, 1)) / 2 + lvl + 1 - i++));
		ft_putchar('\n');
	}
}

void	sastantua(int size)
{
	make_floor(size, size);
}
