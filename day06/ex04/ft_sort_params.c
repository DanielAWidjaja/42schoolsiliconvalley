/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:08:04 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/27 22:29:31 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char			*i;

	i = str;
	while (*i)
	{
		ft_putchar(*i);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int				i;
	int				j;
	char			*tmp;

	i = 1;
	while (i++ < argc)
	{
		j = 1;
		while (argv[j + 1])
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
