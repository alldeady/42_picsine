/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:59:06 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/10 18:59:33 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_plus(int x, int y)
{
	ft_putnbr(x + y);
}

void	ft_minus(int x, int y)
{
	ft_putnbr(x - y);
}

void	ft_mult(int x, int y)
{
	ft_putnbr(x * y);
}

void	ft_div(int x, int y)
{
	if (y > 0)
		ft_putnbr(x / y);
	else
		ft_putstr("Stop : division by zero");
}

void	ft_mod(int x, int y)
{
	if (y > 0)
		ft_putnbr(x % y);
	else
		ft_putstr("Stop : modulo by zero");
}
