/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:00:01 by rriyas            #+#    #+#             */
/*   Updated: 2021/08/16 09:31:07 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dlen;
	unsigned int	i;

	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	i = 0;
	while (src[i] != '\0' && i < nb)
		dest[dlen++] = src[i++];
	dest[dlen] = '\0';
	return (dest);
}
