/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 00:53:06 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/23 20:01:09 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int ret;

	if (power < 0)
		return (0);
	ret = 1;
	i = 0;
	while (i < power)
	{
		ret *= nb;
		i++;
	}
	return (ret);
}
