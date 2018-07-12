/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:14:08 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/21 15:31:22 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_num(char hundreds, char tens, char ones)
{
	if (!(hundreds == '0' && tens == '1' && ones == '2'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(hundreds);
	ft_putchar(tens);
	ft_putchar(ones);
}

void	ones_loop(char hundreds, char tens, char cur)
{
	if (tens < cur)
	{
		print_num(hundreds, tens, cur);
	}
}

void	tens_loop(char hundreds, char cur)
{
	char ones;

	if (hundreds < cur)
	{
		ones = cur + 1;
		while (ones <= '9')
		{
			ones_loop(hundreds, cur, ones);
			ones++;
		}
	}
}

void	ft_print_comb(void)
{
	char hundreds;
	char tens;

	hundreds = '0';
	while (hundreds <= '9')
	{
		tens = hundreds + 1;
		while (tens <= '9')
		{
			tens_loop(hundreds, tens);
			tens++;
		}
		hundreds++;
	}
}
