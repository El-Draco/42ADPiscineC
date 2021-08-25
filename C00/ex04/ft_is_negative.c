/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:18:10 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/04 17:18:27 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char negative;
	char null_or_positive;

	negative = 'N';
	null_or_positive = 'P';
	if (n < 0)
		write(1, &negative, 1);
	else
		write(1, &null_or_positive, 1);
}
