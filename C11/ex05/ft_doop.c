/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:25:21 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/25 11:14:37 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

void	ft_set_ptr(int (*f[5])(int, int))
{
	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mult;
	f[3] = &ft_div;
	f[4] = &ft_mod;
}

int		do_op(int a, int b, char *ch, int (*f[5])(int, int))
{
	int ans;

	if (ft_strcmp(ch, "+") == 0)
		ans = (*f[0])(a, b);
	else if (ft_strcmp(ch, "-") == 0)
		ans = (*f[1])(a, b);
	else if (ft_strcmp(ch, "*") == 0)
		ans = (*f[2])(a, b);
	else if (ft_strcmp(ch, "/") == 0)
		ans = (*f[3])(a, b);
	else if (ft_strcmp(ch, "%") == 0)
		ans = (*f[4])(a, b);
	else
		ans = 0;
	return (ans);
}
