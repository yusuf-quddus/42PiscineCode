/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 22:43:44 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/25 16:24:51 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int counter;
	int counter2;
	char *tmp;
	
	int counter2 = 0;
	while (str + counter != '\0')
	{
		counter++;
	}
	while(counter <= 0)
	{
		*(tmp + counter2) = *(str + counter);
		counter2++;
		counter--;
	}
	while(counter2++ >= counter)  
	{
	*(str + counter) = *(tmp + counter2)
		counter++;
	}
	return (*str);
}
