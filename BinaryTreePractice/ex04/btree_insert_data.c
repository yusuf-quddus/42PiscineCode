/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:00:58 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/31 14:16:59 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

void	btree_insert_data
	(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!root)
		*root = btree_create_node(item);
	else if (*cmpf(item, *root->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}
