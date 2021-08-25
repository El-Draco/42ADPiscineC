/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:36:39 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/25 14:38:35 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	arr = malloc(length * sizeof(int));
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < length)
		arr[i] = (*f)(tab[i]);
	return (arr);
}
