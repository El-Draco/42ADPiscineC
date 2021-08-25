/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:39:15 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/16 21:16:26 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		invalid_base(char *base, int base_len)
{
	int i;
	int j;
	int len;

	len = ft_strlen(base);
	if (base_len <= 1 || base == NULL)
		return (0);
	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-')
			return (0);
	i = -1;
	while (++i < len - 1)
	{
		j = i;
		while (++j < len)
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	number[40];
	int		i;
	int		base_len;
	long	n;

	i = 0;
	n = nbr;
	base_len = ft_strlen(base);
	if (invalid_base(base, base_len) == 0)
		return ;
	if (n == 0)
		write(1, "0", 1);
	if (nbr < 0)
		n = -n;
	while (n != 0)
	{
		number[i++] = base[n % base_len];
		n /= base_len;
	}
	if (nbr < 0)
		write(1, "-", 1);
	while (--i >= 0)
		write(1, &number[i], 1);
}
