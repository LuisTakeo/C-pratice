/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:57:39 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/27 22:24:53 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "board.h"

void	fill_perspective_2_and_2(t_board *tboard);

int	digit_to_int(char c)

{
	return (c - '0');
}

void	parse_args(int out_arr[4][4], char in_str[32])
{
	int	i;
	int	j;
	int	ch_i;

	i = 0;
	ch_i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			out_arr[i][j] = digit_to_int(in_str[ch_i]);
			j++;
			ch_i += 2;
		}
		i++;
	}
}

#ifndef TEST

int	main(int argc, char *argv[])
{
	char		*arg;
	t_board		board;

	init_board(&board);
	print_board(&board);
	write(1, "\n", 1);
	// arg = "4 2 3 1 1 2 2 2 3 2 2 1 1 3 2 2";
	// arg = "3 1 2 3 1 4 2 2 2 3 2 1 3 2 1 2";
	arg = "1 2 2 2 4 2 1 3 1 2 2 3 3 1 2 2";
	parse_args(board.visibles, arg);
	fill_4sequence(&board);
	print_board(&board);
	write(1, "\n", 1);
	fill_1(&board);
	print_board(&board);
	write(1, "\n", 1);
	fill_perspective_2_and_3(&board);
	fill_perspective_2_and_2(&board);
	print_board(&board);
	write(1, "\n", 1);
	return (0);
}
#endif
