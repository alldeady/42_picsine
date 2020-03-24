/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 16:33:09 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/11 17:44:05 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*prev;
	t_list	*now;

	prev = NULL;
	now = NULL;
	if (ac <= 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		now = ft_create_elem(av[i]);
		now->next = prev;
		prev = now;
		i++;
	}
	return (now);
}
