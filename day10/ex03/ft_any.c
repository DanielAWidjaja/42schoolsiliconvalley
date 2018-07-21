/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 15:22:10 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/02 15:23:50 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f) (char*))
{
	int i;

	i = 0;
	while (tab[i])
		if (f(tab[i++]) == 1)
			return (1);
	return (0);
}