/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:20:29 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/04 17:46:33 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char digit_one;
	char digit_two;
	char digit_three;

	digit_one = 47;
	while (digit_one++ < '9')
	{
		digit_two = digit_one;
		while (digit_two++ < '9')
		{
			digit_three = digit_two;
			while (digit_three++ < '9')
			{
				if (digit_one != digit_two != digit_three)
				{
					write(1, &digit_one, 1);
					write(1, &digit_two, 1);
					write(1, &digit_three, 1);
					if (digit_one != '7')
						write(1, ", ", 2);
				}
			}
		}
	}
}
