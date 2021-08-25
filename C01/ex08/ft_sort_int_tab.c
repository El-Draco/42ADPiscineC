/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:39:07 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/07 09:19:59 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int j;
	int index;

	i = -1;
	index = 0;
	while (++i < size - 1)
	{
		index = i;
		j = i;
		while (++j < size)
		{
			if (tab[j] < tab[index])
				index = j;
		}
		temp = tab[index];
		tab[index] = tab[i];
		tab[i] = temp;
	}
}
