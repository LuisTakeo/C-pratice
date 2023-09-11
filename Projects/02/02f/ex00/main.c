/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:59:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/09/03 21:12:11 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	main(int argc, char **argv)
{
	if (argc <= 1 || argc > 3
		|| ft_is_numberic(argv[1]) || ft_open_read_close(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
}

/*
	unsigned long long int valor = 1000000000000000000000000000000000000;
*/
