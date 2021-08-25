/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:16:57 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/20 13:57:47 by rriyas           ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sent;
	int		len;
	int		i;
	int		n;

	len = (size - 1) * ft_strlen(sep);
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	sent = malloc(len);
	if (len == 0 || sent == NULL)
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
