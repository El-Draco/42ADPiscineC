/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:18:12 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/10 12:41:23 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*s;
	char			*d;
	unsigned int	n;

	s = src;
	d = dest;
	n = size;
	if (n != 0)
	{
		while (--n != 0)
			if ((*d++ = *s++) == '\0')
				break ;
	}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
