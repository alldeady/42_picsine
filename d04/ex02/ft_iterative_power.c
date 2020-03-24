/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 23:01:46 by csnowbal          #+#    #+#             */
/*   Updated: 2020/02/29 23:03:54 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	r = nb;
	while (power > 1)
	{
		r *= nb;
		power--;
	}
	return (r);
}
