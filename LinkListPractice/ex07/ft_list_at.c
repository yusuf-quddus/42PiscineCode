/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:21:38 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/24 22:10:45 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		n;
	t_list	*pointer;

	n = 0;
	pointer = begin_list;
	while (pointer && pointer->next && n < nbr)
	{
		pointer = pointer->next;
		n++;
	}
	if (!pointer || (pointer->next == '\0' && n < nbr))
		return (0);
	return (pointer);
}
