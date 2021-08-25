/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:14:44 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/20 16:54:45 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*a;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	a = malloc(4 * (max - min));
	if (!a)
		return (a);
	while (min + i < max)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
