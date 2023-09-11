/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_2_and_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:12:06 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/27 22:23:09 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../board.h"

void	fill_perspective_2_and_2_horiz(t_board *board);
void	check_fill_horizontal_2_2(t_board *board, int row);
void	fill_horiz_2_2(t_board *board, int row, int value1, int value2);

void	fill_vertical_2_2(t_board *board, int col, int value1, int value2)
{
	put_num(board, 2, col, value1);
	put_num(board, 3, col, value2);
}

void	check_fill_vertical_2_2(t_board *board, int col)
{
	int	row;

	row = 0;
	if (board->matrix[1][col] == 4)
	{
		row = 2;
		if (board->matrix[0][col] == 1)
		{
			fill_vertical_2_2(board, col, 2, 3);
		}
		else if (board->matrix[0][col] == 2)
		{
			fill_vertical_2_2(board, col, 1, 3);
		}
		else if (board->matrix[0][col] == 3)
		{
			fill_vertical_2_2(board, col, 1, 2);
		}
	}

}



void	fill_perspective_2_and_2_vertical(t_board *board)
{
	int	col;
	int	*up;
	int	*down;


	up = board->visibles[0];
	down = board->visibles[1];
	col = 0;
	while (col < 4)
	{
		if (up[col] == 2 && down[col] == 2)
		{
			check_fill_vertical_2_2(board, col);
			return ;
		}
		col++;
	}
}


void	fill_perspective_2_and_2(t_board *board)
{
	fill_perspective_2_and_2_horiz(board);
	fill_perspective_2_and_2_vertical(board);
}
