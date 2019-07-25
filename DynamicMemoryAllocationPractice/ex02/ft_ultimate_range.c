/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:09:15 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/18 21:53:20 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;
	long temp;

	temp = max;
	temp -= min;
	i = 0;
	if ((temp) > 2147483647)
		return (0);
	else if (min >= max)
		return (0);
	else
	{
		arr = (int*)(malloc(sizeof(int) * (max - min)));
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		return (arr);
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range)
		return (max - min);
	else
		return (0);
}
