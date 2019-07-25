/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 22:06:00 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/24 22:04:48 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void data)
{
	t_list *add_list;

	if (*begin_list)
	{
		add_list = begin_list;
		while (add_list->next)
			add_list = add_list->next;
		add_list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	ft_list *begin_list;

	i = ac;
	begin_list = ft_create_elem(av[i]);
	i--;
	while (i > 0)
	{
		ft_list_push_back(&begin_list, av[i]);
		i--;
	}
	return (begin_list);
}
