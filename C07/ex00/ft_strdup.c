/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:10:01 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/19 19:13:19 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	s = (char*)malloc(ft_strlen(src) + 1);
	if (!s)
		return (s);
	i = -1;
	while (src[++i])
		s[i] = src[i];
	s[i] = 0;
	return (s);
}
