/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 16:16:19 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/15 14:22:37 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include <unistd.h>
# include <stdlib.h>

int		eval_expr(char *str);
int		multi(char **str);
int		spreading(char **str);
int		scouting(char **str);
int		do_op(int a, int b, char c);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*white_spaces(char *str);

#endif
