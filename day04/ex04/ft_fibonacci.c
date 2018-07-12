/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 01:00:19 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/23 20:00:05 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int idx)
{
	if (idx < 0)
		return (-1);
	if (idx == 0)
		return (0);
	if (idx == 1)
		return (1);
	return (ft_fibonacci(idx - 1) + ft_fibonacci(idx - 2));
}
