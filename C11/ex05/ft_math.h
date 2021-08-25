/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:02:13 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/25 11:02:17 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <unistd.h>

int		white_space(char ch);
int		is_num(char ch);
int		ft_atoi(char *str);
int		do_op(int a, int b, char *ch, int (*f[5])(int, int));
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
void	ft_set_ptr(int (*f[5])(int, int));
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

#endif
