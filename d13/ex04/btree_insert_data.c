/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 20:49:35 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/13 21:52:49 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
		void *item, int (*cmpf)(void *, void *))
{
	t_btree	*cur;

	if (!(root) || !(*root) || !(item))
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	cur = *root;
	if (cmpf(item, cur->item) < 0)
	{
		if (cur->left)
			btree_insert_data(&cur->left, item, cmpf);
		else
			cur->left = btree_create_node(item);
	}
	else
	{
		if (cur->right)
			btree_insert_data(&cur->right, item, cmpf);
		else
			cur->right = btree_create_node(item);
	}
}
