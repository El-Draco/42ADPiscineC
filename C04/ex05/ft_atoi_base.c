/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:04:50 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/16 21:27:28 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		white_space(char ch)
{
	if (ch == ' ')
		return (1);
	if (ch >= 9 && ch <= 13)
		return (1);
	return (0);
}

int		is_valid_symbol(char ch, char *str)
{
	int i;
	int found;

	i = -1;
	found = 0;
	while (str[++i])
		if (ch == str[i])
			found = 1;
	return (found);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		find_pos(char ch, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (ch == base[i])
			break ;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		m_count;
	int		num;

	num = 0;
	i = 0;
	while (white_space(str[i]) == 1)
		i++;
	m_count = 1;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			m_count *= -1;
	if (is_valid_symbol(str[i], base) == 1)
		while (is_valid_symbol(str[i], base) == 1)
		{
			num *= ft_strlen(base);
			num += find_pos(str[i], base);
			i++;
		}
	else
		return (0);
	num *= m_count;
	return (num);
}
