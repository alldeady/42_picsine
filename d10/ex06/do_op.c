/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:58:20 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/10 18:58:22 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	(*income(char *sym))(int, int)
{
	if (ft_strcmp(sym, "+") == 0)
		return (&ft_plus);
	else if (ft_strcmp(sym, "-") == 0)
		return (&ft_minus);
	else if (ft_strcmp(sym, "*") == 0)
		return (&ft_mult);
	else if (ft_strcmp(sym, "/") == 0)
		return (&ft_div);
	else if (ft_strcmp(sym, "%") == 0)
		return (&ft_mod);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	void	(*process)(int, int);

	if (argc == 4)
	{
		x = ft_atoi(argv[1]);
		process = income(argv[2]);
		y = ft_atoi(argv[3]);
		if (process)
			process(x, y);
		else
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
