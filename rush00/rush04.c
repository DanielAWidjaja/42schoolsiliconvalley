/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 13:21:16 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/23 13:54:37 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	update(char *l, char *m, char *r, int sw)
{
	if (sw == 0)
	{
		*l = 'A';
		*m = 'B';
		*r = 'C';
	}
	if (sw == 1)
	{
		*l = 'B';
		*m = ' ';
		*r = 'B';
	}
	if (sw == 2)
	{
		*l = 'C';
		*m = 'B';
		*r = 'A';
	}
}

int		col_nbr(int cur_box, int ttl_col)
{
	return (cur_box % ttl_col);
}

void	rush(int x, int y)
{
	char	l;
	char	m;
	char	r;
	int		cur_box;

	cur_box = 0;
	update(&l, &m, &r, 0);
	while (cur_box < x * y)
	{
		if (col_nbr(cur_box, x) == 0)
			ft_putchar(l);
		else if (col_nbr(cur_box, x) == x - 1)
			ft_putchar(r);
		else
			ft_putchar(m);
		if (col_nbr(cur_box, x) == x - 1)
			ft_putchar('\n');
		cur_box++;
		if (cur_box == x)
			update(&l, &m, &r, 1);
		if (cur_box == x * (y - 1))
			update(&l, &m, &r, 2);
	}
}
