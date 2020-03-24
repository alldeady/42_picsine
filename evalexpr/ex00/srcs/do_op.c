/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:16:18 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/14 23:32:20 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	do_op(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	else if (c == '-')
		return (a - b);
	else if (c == '*')
		return (a * b);
	else if (c == '/')
		return (a / b);
	else if (c == '%')
		return (a % b);
	else
		return (0);
}
