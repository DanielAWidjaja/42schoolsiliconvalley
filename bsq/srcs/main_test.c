/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:04:56 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/11 11:04:25 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

void	test_validfile(char *str, int exp)
{
	int res;

	res = verify_file(str);
	printf("Expected : %d | Res : %d - ", exp, res);
	if (res == exp)
		printf("SUCCESS\n");
	else
		printf("NOPE\n");
	printf("------------------\n");
}
