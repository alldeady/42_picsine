/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 22:59:28 by csnowbal          #+#    #+#             */
/*   Updated: 2020/02/29 23:12:20 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	while (0 < nb)
	{
		r *= nb;
		nb--;
	}
	return (r);
}