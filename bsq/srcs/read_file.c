/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnormcor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 22:09:12 by wnormcor          #+#    #+#             */
/*   Updated: 2020/03/16 22:09:13 by wnormcor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\includes\bsq.h"

int		read_input(int fd, char **str, int *len)
{
	t_input	*begin;
	t_input	*wp;

	begin = (t_input *)malloc(sizeof(t_input));
	wp = begin;
	wp->next = 0;
	wp->size = 0;
	while ((wp->size = read(fd, wp->content, 50000)))
	{
		wp->next = (t_input *)malloc(sizeof(t_input));
		wp = wp->next;
		wp->next = 0;
		wp->size = 0;
	}
	wp = begin;
	*len = wp->size;
	while ((wp = wp->next))
		*len += wp->size;
	return (input_replication(str, len, begin));
}

int		input_replication(char **str, int *len, t_input *begin)
{
	t_input	*wp;
	int		i;
	int		j;

	wp = begin;
	*str = (char *)malloc(sizeof(char) * (*len + 1));
	(*str)[*len] = 0;
	i = -1;
	while (wp)
	{
		j = -1;
		while (++j < wp->size)
			(*str)[++i] = (wp->content)[j];
		wp = wp->next;
	}
	while (begin)
	{
		wp = begin->next;
		free(begin);
		begin = wp;
	}
	return (0);
}
