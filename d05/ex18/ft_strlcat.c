/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:44:48 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/03 21:48:16 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	l = 0;
	while (dest[l] && l < size)
		l++;
	i = l;
	while (src[l - i] != '\0' && l + 1 < size)
	{
		dest[l] = src[l - i];
		l++;
	}
	if (i < size)
		dest[l] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	return (i + j);
}
