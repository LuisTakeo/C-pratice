/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_2_and_2h.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:15:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/27 22:23:07 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../board.h"

void	fill_horiz_2_2(t_board *board, int row, int value1, int value2)
{
	put_num(board, row, 2, value1);
	put_num(board, row, 3, value2);
}

void	check_fill_horizontal_2_2(t_board *board, int row)
{
	int	col;

	col = 0;
	if (board->matrix[row][1] == 4)
	{
		col = 2;
		if (board->matrix[row][0] == 1)
		{
			fill_horiz_2_2(board, row, 2, 3);
		}
		else if (board->matrix[row][0] == 2)
		{
			fill_horiz_2_2(board, row, 1, 3);
		}
		else if (board->matrix[row][0] == 3)
		{
			fill_horiz_2_2(board, row, 1, 2);
		}
	}

}

void	fill_perspective_2_and_2_horiz(t_board *board)
{
	int	row;
	int	*left;
	int	*right;

	left = board->visibles[2];
	right = board->visibles[3];
	row = 0;
	while (row < 4)
	{
		if (left[row] == 2 && right[row] == 2)
		{
			check_fill_horizontal_2_2(board, row);
			return ;
		}
		row++;
	}
}
