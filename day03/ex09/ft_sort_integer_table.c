/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:33:26 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/22 23:14:16 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int smll;
	int val;

	i = 0;
	while (i < size)
	{
		j = i;
		smll = i;
		val = tab[i];
		while (j < size)
		{
			if (tab[j] < val)
			{
				val = tab[j];
				smll = j;
			}
			j++;
		}
		tab[smll] = tab[i];
		tab[i] = val;
		i++;
	}
}
