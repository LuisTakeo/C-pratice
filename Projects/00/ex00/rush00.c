/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:24:18 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/19 17:59:12 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1 || a == x) && (b == 1 || b == y))
				ft_putchar('o');
			else if ((b == 1 || b == y))
				ft_putchar(0x2d);
			else if ((a == 1 || a == x))
				ft_putchar(0x7c);
			else
				ft_putchar(0x20);
			a++;
		}
		ft_putchar('\n');
		b++;
		a = 1;
	}
}
