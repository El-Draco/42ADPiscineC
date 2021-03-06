/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:40:42 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/17 19:53:24 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int temp;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	temp = nb / 2;
	while (i <= temp)
	{
		if (i > 46340)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
