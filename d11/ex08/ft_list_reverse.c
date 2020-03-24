/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:00:16 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/11 20:02:52 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*before;
	t_list	*now;
	t_list	*next;

	before = NULL;
	now = *begin_list;
	while (now != NULL)
	{
		next = now->next;
		now->next = before;
		before = now;
		now = next;
	}
	*begin_list = before;
}
