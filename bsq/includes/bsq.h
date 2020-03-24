/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnormcor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 18:37:58 by wnormcor          #+#    #+#             */
/*   Updated: 2020/03/16 18:37:59 by wnormcor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** use the following functions: exit, open, close, write, read, malloc and free
*/

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_input
{
	char			content[50000];
	int				size;
	struct s_input	*next;
}					t_input;

typedef struct		s_symbols
{
	int				y;
	int				x;
	char			empty;
	char			obstacle;
	char			full;
	int				max;
	int				top;
	int				down;
	int				left;
	int				right;
}					t_symbols;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				ft_putbit(short nb, t_symbols *sm);

int					do_bsq(char *file);
int					read_input(int fd, char **str, int *len);
int					input_replication(char **str, int *len, t_input *begin);
void				out_results(char *str);

int					get_params(char *str, t_symbols **params);
int					create_matrix(short ***matrix, t_symbols *sm);
int					fill_matrix(short **matrix, t_symbols *sm, char *str);

int					print_matrix(short **matrix, t_symbols *sm);
int					print_matrix_digits(short **matrix, t_symbols *sm);

void				calculate_matrix_circle(short **matrix, t_symbols *sm,
											int x, int y);
int					calculate_matrix(short **matrix, t_symbols *sm);

void				print_real_matrix(short **matrix, t_symbols *sm);
void				print_matrix_header(t_symbols *sm);

int					print_invalid_map();

#endif
