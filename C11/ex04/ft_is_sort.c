/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:34:27 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/25 14:35:18 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int asc;
	int dsc;

	i = -1;
	asc = 1;
	dsc = 1;
	while (++i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			dsc = 0;
	}
	return (asc || dsc);
}
