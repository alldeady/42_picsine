/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:16:16 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/11 22:20:46 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*f_free;

	if (!*begin_list)
		return ;
	while (*begin_list)
	{
		f_free = *begin_list;
		*begin_list = (*begin_list)->next;
		free(f_free);
	}
	*begin_list = NULL;
}
