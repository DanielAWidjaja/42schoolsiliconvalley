/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:19:36 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/11 23:03:21 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_var
{
	int	r;
	int c;
	int sz;
}				t_var;

void			print_ans(int **grid, char *symbols);
int				**decode_ps(int **grid);
int				ft_all_different(char a, char b, char c);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
int				ft_getheight(char *input);
int				ft_strlen(char *str);
int				verify_file(char *str);
int				ft_linelen(char *str, int i);
int				skip_blank(char *str, int i);
int				skip_digits(char *str, int i);
int				skip_line(char *str, int i);
char			*ft_getline(char *str, int i);
char			*ft_cutstr(char *str, int i, int len);
char			**ft_splitline(char *str);
t_var			*create_t_var(int a, int b, int c);
void			replace(t_var **x, int a, int b, int c);
int				ft_arraylen(char **array);
int				**solve(int **grid);
int				cnt_col(int **grid);
int				cnt_row(int **grid);
int				**ft_transform(char *input);
int				**make_grid(int **grid, t_var *pos);
int				get_val(int **grid, int i, int j);
int				check_ps(int **grid, int i, int j, int sz);
int				**make_ps(int **grid);

#endif
