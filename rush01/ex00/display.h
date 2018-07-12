/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 02:56:41 by ihuang            #+#    #+#             */
/*   Updated: 2018/07/01 02:57:34 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

# include <unistd.h>

void	ft_putstr(char *line)
{
	int i;

	i = 0;
	while (i < 9)
	{
		write(1, line++, 1);
		if (i < 8)
			write(1, " ", 1);
		else
			write(1, "\n", 1);
		i++;
	}
}

void	display_grid(char **tab)
{
	int i;

	i = 0;
	while (i < 9)
		ft_putstr(tab[i++]);
}

#endif
