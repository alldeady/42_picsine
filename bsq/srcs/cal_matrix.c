/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnormcor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:08:58 by wnormcor          #+#    #+#             */
/*   Updated: 2020/03/17 15:09:00 by wnormcor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\includes\bsq.h"

int		create_matrix(short ***matrix, t_symbols *sm)
{
	int			i;
	short		**wm;

	wm = (short **)malloc(sizeof(short *) * sm->y);
	i = -1;
	while (++i < sm->y)
		wm[i] = (short *)malloc(sizeof(short) * sm->x);
	*matrix = wm;
	return (0);
}

int		fill_matrix(short **matrix, t_symbols *sm, char *str)
{
	int			x;
	int			y;

	while (*str != '\n')
		str++;
	str++;
	x = -1;
	while (++x < sm->y)
	{
		y = -1;
		while (++y < sm->x)
			matrix[x][y] = (*(str++) == sm->empty) ? 1 : 0;
		str++;
	}
	return (0);
}

void	calculate_matrix_circle(short **matrix, t_symbols *sm, int x, int y)
{
	short		a;

	y = 0;
	while (++y < sm->y)
	{
		x = 0;
		while (++x < sm->x)
		{
			if (matrix[y][x] == 0)
				continue ;
			a = matrix[y - 1][x - 1];
			if (a > matrix[y - 1][x])
				a = matrix[y - 1][x];
			if (a > matrix[y][x - 1])
				a = matrix[y][x - 1];
			a = a + 1;
			matrix[y][x] = a;
			if (a > sm->max)
			{
				sm->max = a;
				sm->down = y;
				sm->right = x;
			}
		}
	}
}

int		calculate_matrix(short **matrix, t_symbols *sm)
{
	int			x;

	sm->max = 0;
	x = -1;
	while (++x < sm->x)
		if (matrix[1][x] == 1)
		{
			sm->max = 1;
			sm->down = 1;
			sm->right = x;
		}
	calculate_matrix_circle(matrix, sm, 0, 0);
	sm->top = sm->down - sm->max + 1;
	sm->left = sm->right - sm->max + 1;
	return (0);
}
