/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnormcor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:21:43 by wnormcor          #+#    #+#             */
/*   Updated: 2020/03/17 15:21:45 by wnormcor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\includes\bsq.h"

int		get_params(char *str, t_symbols **params)
{
	t_symbols	*sm;
	char		*wp;

	sm = malloc(sizeof(t_symbols));
	wp = str;
	while (*wp != '\n')
		wp++;
	sm->full = *(--wp);
	sm->obstacle = *(--wp);
	sm->empty = *(--wp);
	sm->y = 0;
	while (str < wp)
		sm->y = sm->y * 10 + (*(str++) - '0');
	while (*wp != '\n')
		wp++;
	sm->x = 0;
	while (*(++wp) != '\n')
		(sm->x)++;
	*params = sm;
	return (0);
}
