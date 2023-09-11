/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible2_and_3h.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julidos- <julidos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:34:02 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/27 22:09:22 by julidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../board.h"

void	check_fill_horizontal_l_2_3(t_board *board, int row, int col, int value)
{
	put_num(board, row, col, 4);
	if (col == 1)
	{
		if (board->matrix[row][0] == 3)
		{
			put_num(board, row, 2, 2);
			put_num(board, row, 3, 1);
		}
		else if (board->matrix[row][0] == 2)
		{
			put_num(board, row, 2, 3);
			put_num(board, row, 3, 1);
		}
		else if (board->matrix[row][0] == 1)
		{
			put_num(board, row, 2, 3);
			put_num(board, row, 3, 2);
		}
	}
}

void	check_fill_horizontal_r_2_3(t_board *board, int row, int col, int value)
{
	put_num(board, row, col, 4);
	if (col == 2)
	{
		if (board->matrix[row][3] == 3)
		{
			put_num(board, row, 1, 2);
			put_num(board, row, 0, 1);
		}
		else if (board->matrix[row][3] == 2)
		{
			put_num(board, row, 1, 3);
			put_num(board, row, 0, 1);
		}
		else if (board->matrix[row][3] == 1)
		{
			put_num(board, row, 1, 3);
			put_num(board, row, 0, 2);
		}
	}
}

void	fill_perspective_2_and_3_horizontal(t_board *board)
{
	int	col;
	int	row;
	int	*left;
	int	*right;

	left = board->visibles[2];
	right = board->visibles[3];
	row = 0;
	while (row < 4)
	{
		if (left[row] == 2 && right[row] == 3)
		{
			check_fill_horizontal_l_2_3(board, row, 1, 4);
			return ;
		}
		else if (left[row] == 3 && right[row] == 2)
		{
			check_fill_horizontal_r_2_3(board, row, 2, 4);
			return ;
		}
		row++;
	}
}
