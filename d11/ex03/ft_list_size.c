/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:40:14 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/11 19:37:46 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*temp;

	size = 0;
	temp = begin_list;
	if (!begin_list)
		return (size);
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
