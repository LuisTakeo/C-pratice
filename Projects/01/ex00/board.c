/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:05:01 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 22:01:52 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "board.h"
#include "state.h"
#include "state.h"
#include <unistd.h>

void	print_board(t_board *board)
{
	int		col;
	int		row;
	char	ch;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 3)
		{
			ch = board->matrix[row][col] + '0';
			write(1, &ch, 1);
			write(1, " ", 1);
			col++;
		}
		ch = board->matrix[row][col] + '0';
		write(1, &ch, 1);
		write(1, "\n", 1);
		row++;
	}
}

void	put_num(t_board *board, int row, int col, int num)
{
	if (board->matrix[row][col] == 0)
	{
		board->matrix[row][col] = num;
		inc_state(board, row, col, num);
	}
	else if (board->matrix[row][col] != num)
		write(1, "Error", 5);
}

void	init_board(t_board *board)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board->matrix[row][col] = 0;
			col++;
		}
		board->state.col_count[row] = 0;
		board->state.row_count[row] = 0;
		board->state.num_count[row] = 0;
		row++;
	}
	board->state.num_count[4] = 0;
}
