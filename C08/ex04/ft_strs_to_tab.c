/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:52:45 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/20 19:54:00 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void					ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s;
	int					i;

	s = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s)
		return (s);
	i = 0;
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = malloc(ft_strlen(av[i]) + 1);
		ft_strcpy(s[i].copy, av[i]);
		i++;
	}
	s[i].size = 0;
	s[i].str = 0;
	s[i].copy = 0;
	return (s);
}
