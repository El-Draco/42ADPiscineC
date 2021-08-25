/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 09:21:51 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/17 16:11:14 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		slen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int len;

	(void)argc;
	len = slen(argv[0]);
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}
