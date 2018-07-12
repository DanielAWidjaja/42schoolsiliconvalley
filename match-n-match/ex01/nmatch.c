/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:43:45 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/01 18:36:25 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		f(int a_pos, int b_pos, char *a, char *b)
{
	int ret;
	int i;

	ret = 0;
	if (a_pos == -1 && b_pos == -1)
		return (1);
	if (b_pos <= -1)
		return (0);
	if (a[a_pos] == b[b_pos])
		ret += f(a_pos - 1, b_pos - 1, a, b);
	if (b[b_pos] == '*')
	{
		i = a_pos + 1;
		while (i >= 0)
		{
			ret += f(a_pos - i, b_pos - 1, a, b);
			i--;
		}
	}
	return (ret);
}

int		nmatch(char *s1, char *s2)
{
	int		a_len;
	int		b_len;

	a_len = 0;
	b_len = 0;
	while (s1[a_len])
	{
		a_len++;
	}
	while (s2[b_len])
	{
		b_len++;
	}
	return (f(a_len - 1, b_len - 1, s1, s2));
}
