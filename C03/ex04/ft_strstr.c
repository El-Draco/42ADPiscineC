/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:14:43 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/16 20:57:01 by rriyas           ###   ########.fr       */
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

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	--i;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *haystack, char *needle)
{
	int i;

	i = -1;
	if (*haystack == '\0' && *needle == '\0')
		return ("");
	while (haystack[++i])
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
			return (haystack + i);
	return (NULL);
}
