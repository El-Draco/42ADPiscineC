/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:57:16 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/09 20:29:24 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char str)
{
	if (str < 'A' || str > 'Z')
		return (0);
	return (1);
}

int		ft_str_is_alpha(char str)
{
	if (str < 'a' || str > 'z')
		if (str < 'A' || str > 'Z')
			return (0);
	return (1);
}

int		ft_str_is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i]) == 1)
		{
			if (ft_str_is_alpha(str[i - 1]) == 0)
				if (ft_str_is_numeric(str[i - 1]) == 0)
					if (str[i] >= 97 && str[i] <= 122)
						str[i] -= 32;
		}
		if (ft_str_is_alpha(str[i]) == 1)
			if (ft_str_is_alpha(str[i - 1]) == 1)
				if (ft_str_is_uppercase(str[i]) == 1)
					str[i] += 32;
		i++;
	}
	return (str);
}
