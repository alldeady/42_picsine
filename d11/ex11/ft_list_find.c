/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 21:13:30 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/11 21:13:43 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	temp = begin_list;
	while (temp)
	{
		if ((*cmp)(temp->data, data_ref) == 0)
			return (temp);
		temp = temp->next;
	}
	return (0);
}
