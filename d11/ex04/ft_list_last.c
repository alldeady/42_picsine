/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 16:22:22 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/11 19:41:03 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	if (!begin_list)
		return (NULL);
	temp = begin_list;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
