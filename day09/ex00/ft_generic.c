/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 00:23:26 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/29 00:23:29 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_generic(void)
{
	ft_putstr("Tut tut ; Tut tut\n");
}

int main() {
	ft_generic();
}