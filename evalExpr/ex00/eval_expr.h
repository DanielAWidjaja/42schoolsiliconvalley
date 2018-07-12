/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:50:17 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/08 21:50:21 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ws(char c);
int		is_digit(char c);
int		ft_atoi(char **str);
int		get_num(char **str);
int		calc(char **str, int pr);
int		eval_expr(char *str);

#endif
