/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:47:45 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/27 21:42:51 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char *i;

	i = str;
	while (*i)
	{
		ft_putchar(*i);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	while (argv[i])
		i++;
	i--;
	while (i >= 0)
	{
		ft_putstr(argv[i--]);
		ft_putchar('\0');
	}
	return (0);
}
