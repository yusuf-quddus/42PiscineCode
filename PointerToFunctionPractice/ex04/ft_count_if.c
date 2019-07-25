/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:17:01 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/23 23:42:12 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int number;

	number = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
		{
			number++;;
		}
		i++;
	}
	return (number);
}
