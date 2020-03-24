/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 22:11:30 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/13 22:15:19 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		kek(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

int		btree_level_count(t_btree *root)
{
	int	count;

	count = 0;
	if (!root)
		return (0);
	if (root->left)
		count = kek(count, btree_level_count(root->left));
	if (root->right)
		count = kek(count, btree_level_count(root->right));
	return (count + 1);
}
