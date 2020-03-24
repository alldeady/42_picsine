/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:20:45 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/15 22:37:54 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		scouting(char **str)
{
	int	n;
	int sign;

	n = 0;
	sign = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if (((*str)++)[0] == '-')
			sign = -1;
	}
	if ((*str)[0] == '(')
	{
		(*str)++;
		n = spreading(str);
		if ((*str)[0] == ')')
			(*str)++;
		return (sign * n);
	}
	while ((*str)[0] >= '0' && (*str)[0] <= '9')
	{
		n = n * 10 + ((*str)++)[0] - '0';
	}
	return (sign * n);
}

int		multi(char **str)
{
	int		n1;
	int		n2;
	char	c;

	n1 = scouting(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		c = ((*str)++)[0];
		n2 = scouting(str);
		n1 = do_op(n1, n2, c);
	}
	return (n1);
}

int		spreading(char **str)
{
	int		n1;
	int		n2;
	char	c;

	n1 = scouting(str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		c = ((*str)++)[0];
		if (c == '+' || c == '-')
			n2 = multi(str);
		else
			n2 = scouting(str);
		n1 = do_op(n1, n2, c);
	}
	return (n1);
}

int		eval_expr(char *str)
{
	str = white_spaces(str);
	if (str[0] == '\0')
		return (0);
	return (spreading(&str));
}
