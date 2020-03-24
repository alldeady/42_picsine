/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:43:56 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/05 21:44:11 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *r;

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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
