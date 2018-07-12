/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:48:33 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/06 12:23:06 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_file(char *str)
{
	FILE *fp;
    char str[10000005];
    char* filename;
	
	filename = str;
    fp = fopen(filename, "r");
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
}

int		main(int argc, char **argv)
{
	int		buffer;
	char	str[10000005];
	int		bytes;
	int		i;

	if (argc > 1)
	{
		while (i < argc)
		{
			str = read_file(argv[i]);
			if (!verify_file(str))
				ft_putstr("Not a valid file.\n");
			else
				print_ans(solve(make_ps(ft_transform(str))),
						ft_cutstr(str, skip_digits(str, 0), 3));
			i++;
		}
	}
	return (0);
}
