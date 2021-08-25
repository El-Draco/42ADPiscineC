/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:53:56 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/25 16:17:03 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int temp;

	temp = nb / 2;
	i = 3;
	if (nb == 2)
		return (2);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	while (i <= temp)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
		nb += 2;
	return (nb);
}
