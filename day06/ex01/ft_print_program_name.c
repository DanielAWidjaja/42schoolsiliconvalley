/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 13:05:44 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/27 15:11:03 by dwidjaja         ###   ########.fr       */
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
	argc = 0;
	ft_putstr(argv[0]);
	ft_putchar('\n');
}
