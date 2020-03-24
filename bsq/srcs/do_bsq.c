/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnormcor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 20:43:16 by wnormcor          #+#    #+#             */
/*   Updated: 2020/03/16 20:43:18 by wnormcor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\includes\bsq.h"

int		check_valid_map(char *str, t_symbols *sm)
{
	int		emp;
	int		obs;
	int		y;
	int		x;

	emp = sm->empty;
	obs = sm->obstacle;
	while (*str != '\n')
		str++;
	str++;
	y = -1;
	while (++y < sm->y)
	{
		x = -1;
		while (++x < sm->x)
		{
			if (!(*str == emp || *str == obs))
				return (1);
			str++;
		}
		if (*(str++) != '\n')
			return (1);
	}
	return (0);
}

int		check_cal_and_print(char *str, t_symbols *sm, short **matrix)
{
	int y;

	if (check_valid_map(str, sm))
		return (print_invalid_map());
	fill_matrix(matrix, sm, str);
	free(str);
	calculate_matrix(matrix, sm);
	print_matrix_header(sm);
	print_real_matrix(matrix, sm);
	y = -1;
	while (++y < sm->y)
		free(matrix[y]);
	free(matrix);
	return (0);
}

int		do_bsq(char *file)
{
	int			fd;
	char		*str;
	int			len;
	t_symbols	*sm;
	short		**matrix;

	if (file)
		fd = open(file, O_RDONLY);
	else
		fd = 0;
	if (fd == -1)
	{
		write(2, "bsq: No such file or directory\n", 31);
		return (1);
	}
	read_input(fd, &str, &len);
	get_params(str, &sm);
	create_matrix(&matrix, sm);
	if (check_cal_and_print(str, sm, matrix))
		return (1);
	if (file)
		close(fd);
	return (0);
}
