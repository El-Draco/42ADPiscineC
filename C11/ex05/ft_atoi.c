/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:52:29 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/15 21:35:03 by rriyas           ###   ########.fr       */
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

int		is_num(char ch)
{
	if (ch < '0' || ch > '9')
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int		i;
	int		m_count;
	int		num;

	i = 0;
	while (white_space(str[i]) == 1)
		i++;
	m_count = 1;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			m_count *= -1;
	if (is_num(str[i]) == 1)
	{
		num = str[i] - 48;
		while (is_num(str[++i]) == 1)
		{
			num *= 10;
			num += (str[i] - 48);
		}
	}
	else
		return (0);
	num *= m_count;
	return (num);
}
