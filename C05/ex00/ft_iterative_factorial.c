/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:56:32 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/17 08:24:35 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int f;

	if (nb < 0)
		return (0);
	f = 1;
	while (nb != 0)
	{
		f *= nb;
		nb--;
	}
	return (f);
}
