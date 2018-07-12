/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 04:31:45 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 04:34:15 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	printable(char c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		if (!printable(str[i++]))
			return (0);
	return (1);
}
