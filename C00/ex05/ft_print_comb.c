/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:01:17 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/22 18:18:42 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_n(char m, char n, char o)
{
	ft_putchar(m);
	ft_putchar(n);
	ft_putchar(o);
	if ((m == '7') && (n == '8') && (o == '9'))
	{
		return ;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '9')
	{
		while (y <= '9')
		{
			while (z <= '9')
			{
				print_n(x, y, z);
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
}
