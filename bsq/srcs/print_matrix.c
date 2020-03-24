/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnormcor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:08:09 by wnormcor          #+#    #+#             */
/*   Updated: 2020/03/17 15:08:10 by wnormcor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\includes\bsq.h"

int		print_invalid_map(void)
{
	write(2, "map error\n", 10);
	return (1);
}

int		print_matrix(short **matrix, t_symbols *sm)
{
	int			x;
	int			y;

	x = -1;
	while (++x < sm->y)
	{
		y = -1;
		while (++y < sm->x)
			ft_putbit(matrix[x][y], sm);
		write(1, "\n", 1);
	}
	return (0);
}

int		print_matrix_digits(short **matrix, t_symbols *sm)
{
	int			x;
	int			y;

	x = -1;
	while (++x < sm->y)
	{
		y = -1;
		while (++y < sm->x)
			matrix[x][y] == 0 ? write(1, "0", 1) : write(1, "1", 1);
		write(1, "\n", 1);
	}
	return (0);
}

void	print_real_matrix(short **matrix, t_symbols *sm)
{
	int			y;
	int			x;

	y = -1;
	while (++y < sm->y)
	{
		x = -1;
		while (++x < sm->x)
		{
			if (x >= sm->left && x <= sm->right &&
				y >= sm->top && y <= sm->down)
				write(1, &(sm->full), 1);
			else if (matrix[y][x] == 0)
				write(1, &(sm->obstacle), 1);
			else
				write(1, &(sm->empty), 1);
		}
		write(1, "\n", 1);
	}
}

void	print_matrix_header(t_symbols *sm)
{
	ft_putnbr(sm->y);
	write(1, &(sm->empty), 1);
	write(1, &(sm->obstacle), 1);
	write(1, &(sm->full), 1);
	write(1, "\n", 1);
}
