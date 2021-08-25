/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:48:15 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/10 13:08:01 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int dec)
{
	char	hexf[10];
	int		temp;
	int		i;

	i = 0;
	write(1, "0", 1);
	while (dec != 0)
	{
		temp = dec % 16;
		if (temp > 9)
			hexf[i] = 'a' + temp - 10;
		else
			hexf[i] = temp + 48;
		dec /= 16;
		i++;
	}
	while (--i >= 0)
		write(1, &hexf[i], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		temp;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			write(1, "\\", 1);
			temp = str[i];
			print_hex(temp);
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}
