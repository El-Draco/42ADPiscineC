/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:15:20 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/19 19:16:07 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	*range = malloc(4 * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (max - min);
}
