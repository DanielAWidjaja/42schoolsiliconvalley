/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 15:10:53 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 15:10:56 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

char	*bin(char *ret, int x)
{
	int i;

	ret = bin(x * ((x < 0) * (-1) + (x > 0)));

	return (ret);
}

char	*hex(char *bin)
{

}

char	*oct(char *bin)
{

}

void	ft_putnbr_base(int nbr, char *base)
{
	char *ret;
	
	if (ft_strlen(base) == 10)
	{
		ft_putnbr(nbr, base);
	}
	else if (ft_strlen(base) == 2)
	{
		ft_putstr(bin(nbr));
	}
	else if (ft_strlen(base) == 16)
	{
		ft_putstr(hex(bin(nbr)));
	}
	else if (ft_strlen(base) == 8)
	{
		ft_putstr(oct(bin(nbr)));
	}
	
}