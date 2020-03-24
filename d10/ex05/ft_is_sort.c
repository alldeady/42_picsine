/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:39:53 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/09 21:39:55 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	res;
	int prev;

	i = 0;
	prev = 0;
	while (i + 1 < length)
	{
		res = (*f)(tab[i], tab[i + 1]);
		if ((prev < 0 && res > 0) || (prev > 0 && res < 0))
			return (0);
		if (prev > 0 || res > 0)
			prev = 1;
		else
			prev = -1;
		i++;
	}
	return (1);
}
