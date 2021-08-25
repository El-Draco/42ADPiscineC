/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:16:57 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/20 17:59:26 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int dlen;
	int i;

	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	i = 0;
	while (src[i] != '\0')
		dest[dlen++] = src[i++];
	dest[dlen] = '\0';
}

int		calc_malloc_len(int size, char **strs, char *sep)
{
	int len;
	int i;

	i = -1;
	len = (size - 1) * ft_strlen(sep);
	while (++i < size)
		len += ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sent;
	int		n;
	int		i;

	if (size == 0)
	{
		sent = malloc(1);
		*sent = 0;
		return (sent);
	}
	sent = malloc(calc_malloc_len(size, strs, sep));
	if (sent == NULL)
		return (0);
	i = 0;
	n = 0;
	while (strs[i] && n < size)
	{
		ft_strcat(sent, strs[i]);
		if (i < size - 1)
			ft_strcat(sent, sep);
		i++;
		n++;
	}
	return (sent);
}
