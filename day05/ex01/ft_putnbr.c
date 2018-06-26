/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:33:25 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/21 21:07:32 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb >= -9)
		{
			ft_putchar('0' - nb);
			return ;
		}
		ft_putnbr(-(nb / 10));
		ft_putchar('0' + ((10 - (nb % 10)) % 10));
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}
