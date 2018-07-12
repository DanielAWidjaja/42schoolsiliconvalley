/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 01:14:20 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/21 20:13:28 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_num(int fs, int sc)
{
	char fs_fs;
	char fs_sc;
	char sc_fs;
	char sc_sc;

	fs_fs = fs / 10 + '0';
	fs_sc = fs % 10 + '0';
	sc_fs = sc / 10 + '0';
	sc_sc = sc % 10 + '0';
	ft_putchar(fs_fs);
	ft_putchar(fs_sc);
	ft_putchar(' ');
	ft_putchar(sc_fs);
	ft_putchar(sc_sc);
}

void	ft_print_comb2(void)
{
	int fs;
	int sc;
	int first;

	first = 1;
	fs = 0;
	sc = 1;
	while (fs < 99)
	{
		sc = fs + 1;
		while (sc <= 99)
		{
			if (!first)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			first = 0;
			print_num(fs, sc);
			sc++;
		}
		fs++;
	}
}
