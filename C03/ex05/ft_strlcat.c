/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:52:05 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/15 12:54:34 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_strlcat(char *dest, char *src, int size)
{
	char	*d;
	char	*s;
	int		n;
	int		dlen;

	d = dest;
	s = src;
	n = size;
	while (--n > 0 && *d)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s++;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + s - src);
}
