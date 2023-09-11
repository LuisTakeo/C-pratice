/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible2_and_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julidos- <julidos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:38:55 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/27 20:07:09 by julidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../board.h"

void	fill_perspective_2_and_3_horizontal(t_board *board);

void	check_fill_vertical_u_2_3(t_board *board, int row, int col, int value)
{
	put_num(board, row, col, 4);
	if (row == 1)
	{
		if (board->matrix[0][col] == 3)
		{
			put_num(board, 2, col, 2);
			put_num(board, 3, col, 1);
		}
		else if (board->matrix[0][col] == 2)
		{
			put_num(board, 2, col, 3);
			put_num(board, 3, col, 1);
		}
		else if (board->matrix[0][col] == 1)
		{
			put_num(board, 2, col, 3);
			put_num(board, 3, col, 2);
		}
	}
}

void	check_fill_vertical_d_2_3(t_board *board, int row, int col, int value)
{
	put_num(board, row, col, 4);
	if (row == 2)
	{
		if (board->matrix[3][col] == 3)
		{
			put_num(board, 1, col, 2);
			put_num(board, 0, col, 1);
		}
		else if (board->matrix[3][col] == 2)
		{
			put_num(board, 1, col, 3);
			put_num(board, 0, col, 1);
		}
		else if (board->matrix[3][col] == 1)
		{
			put_num(board, 1, col, 3);
			put_num(board, 0, col, 2);
		}
	}
}

void	fill_perspective_2_and_3_vertical(t_board *board)
{
	int	col;
	int	row;
	int	*up;
	int	*down;

	up = board->visibles[0];
	down = board->visibles[1];
	col = 0;
	while (col < 4)
	{
		if (up[col] == 2 && down[col] == 3)
		{
			check_fill_vertical_u_2_3(board, 1, col, 4);
			return ;
		}
		else if (up[col] == 3 && down[col] == 2)
		{
			check_fill_vertical_d_2_3(board, 2, col, 4);
			return ;
		}
		col++;
	}
}

void	fill_perspective_2_and_3(t_board *board)
{
	fill_perspective_2_and_3_horizontal(board);
	fill_perspective_2_and_3_vertical(board);
}
