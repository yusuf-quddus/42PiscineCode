/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:45:26 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/24 21:57:24 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	ft_list	*list_counter;

	i = 0;
	list_counter = begin_list;
	while (list_counter)
	{
		list_counter = list_counter->next;
		i++;
	}
	return (i);
}
