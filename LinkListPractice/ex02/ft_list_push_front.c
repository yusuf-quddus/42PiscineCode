/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:29:06 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/25 14:25:23 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_front;

	new_front = ft_create_elem(data);
	new_front->next = *begin_list;
	*begin_list = new_front;
}
