/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:50:55 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/24 21:59:07 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	ft_list *last_node;

	if (!begin_list)
		return (0);
	last_node = begin_list;
	while (last_node->next)
	{
		last_node = last_node->next;
	}
	return (last_node);
}
