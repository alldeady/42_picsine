/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:42:18 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/05 21:43:02 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*r;

	if (min >= max)
		return (0);
	r = malloc((max - min) * sizeof(int));
	if (r == NULL)
		return (r);
	i = 0;
	while (min < max)
	{
		r[i++] = min;
		min++;
	}
	return (r);
}
