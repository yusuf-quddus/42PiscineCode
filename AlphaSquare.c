
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:23:37 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/14 12:44:48 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	ft_putchar(char c);

int 	main()
{
	rush(5, 5);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_top(int x)
{
	int i;

	i = 1;
	ft_putchar('A');
	while (i <= (x - 2))
	{
		putchar('B');
		x--;
	}
	if (x > 1)
		putchar('C');
	putchar('\n');
}

void	ft_print_middle(int x)
{
	int i;

	i = 1;
	putchar('B');
	while (i <= (x-2))
	{
		putchar(' ');
		i++;
	}
	if (x > 1)
		putchar('B');
	putchar('\n');
}

void	ft_print_bottom(int x)
{
	int i;

	i = 1;
	ft_putchar('A');
	while (i <= (x - 2))
	{
		putchar('B');
		x--;
	}
	if (x > 1)
		putchar('C');
	putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = y;
	ft_print_top(x);
	if (i > 1)
	{
		while (i > 2)
		{
			ft_print_middle(x);
			i--;
		}
		ft_print_bottom(x);
	}
}
