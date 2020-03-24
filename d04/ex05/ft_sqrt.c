/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 23:05:41 by csnowbal          #+#    #+#             */
/*   Updated: 2020/02/29 23:05:59 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	curr;
	int		tmp;
	float	last;

	if (nb <= 0 || nb == 3)
		return (0);
	curr = nb / 2;
	last = nb;
	tmp = curr;
	while (last - curr > 0.00001)
	{
		last = curr;
		curr = 0.5 * ((float)last + (float)nb / (float)last);
	}
	tmp = curr;
	if (tmp == (float)curr)
		return (curr);
	else
		return (0);
}
