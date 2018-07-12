/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:20:44 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/11 11:02:06 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		skip_blank(char *str, int i)
{
	while (str[i] && str[i] <= ' ')
		i++;
	return (i);
}

int		skip_digits(char *str, int i)
{
	i = skip_blank(str, i);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

int		skip_line(char *str, int i)
{
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i])
		i++;
	return (i);
}
