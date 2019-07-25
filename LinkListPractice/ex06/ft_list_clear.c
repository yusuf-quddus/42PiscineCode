/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:02:55 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/24 22:06:33 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *pointer;
	t_list *temp;

	pointer = *begin_list;
	while (pointer->next && pointer)
	{
		temp = pointer;
		pointer = pointer->next;
		free(temp);
	}
	if (!pointer->next)
	{
		free(pointer);
	}
	*begin_list = 0;
}
