/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 15:15:29 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/02 15:17:38 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int len, void (*f) (int))
{
	int i;

	i = 0;
	while (i < len)
		f(tab[i++]);
}
