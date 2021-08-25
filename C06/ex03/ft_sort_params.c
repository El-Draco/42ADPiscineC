/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:42:24 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/17 14:48:45 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(int argc, char **argv)
{
	int		arg[argc];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (++i < argc)
		arg[i] = i;
	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[arg[j]], argv[arg[i]]) < 0)
				ft_swap(&arg[j], &arg[i]);
			j++;
		}
		ft_putstr(argv[arg[i++]]);
		write(1, "\n", 1);
	}
	return (0);
}
