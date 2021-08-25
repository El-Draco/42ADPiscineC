/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:53:25 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/25 13:51:51 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int g_a;
int g_b;
int g_ans;
char *g_oper;
int	(*g_ptr[5]) (int, int);

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	g_a = ft_atoi(argv[1]);
	g_b = ft_atoi(argv[3]);
	g_oper = argv[2];
	if (ft_strcmp(g_oper, "/") == 0 && g_b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (ft_strcmp(g_oper, "%") == 0 && g_b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else
	{
		ft_set_ptr(g_ptr);
		g_ans = do_op(g_a, g_b, g_oper, g_ptr);
	}
	ft_putnbr(g_ans);
	write(1, "\n", 1);
	return (0);
}
