/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:03:19 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/08/27 16:43:53 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../board.h"

void	fill_1up(t_board *board)
{
	int	col;
	int	row;
	int	*up;
	int	*down;

	up = board->visibles[0];
	down = board->visibles[1];
	col = 0;
	while (col < 1)
	{
		if (up[col] == 1 && down[col] == 2)
		{
			put_num(board, 0, col, 4);
			put_num(board, 3, col, 3);
			return ;
		}
		else if (up[col] == 1)
		{
			put_num(board, 0, col, 4);
			return ;
		}
		col++;
	}
}

void	fill_1down(t_board *board)
{
	int	col;
	int	row;
	int	*down;
	int	*up;

	down = board->visibles[1];
	up = board->visibles[0];
	col = 0;
	while (col < 4)
	{
		if (down[col] == 1 && up[col] == 2)
		{
			put_num(board, 3, col, 4);
			put_num(board, 0, col, 3);
			return ;
		}
		else if (down[col] == 1)
		{
			put_num(board, 3, col, 4);
			return ;
		}
		col++;
	}
}

void	fill_1left(t_board *board)
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
		if (left[row] == 1 && right[row] == 2)
		{
			put_num(board, row, 0, 4);
			put_num(board, row, 3, 3);
			return ;
		}
		else if (left[row] == 1)
		{
			put_num(board, row, 0, 4);
			return ;
		}
		row++;
	}
}

void	fill_1right(t_board *board)
{
	int	col;
	int	row;
	int	*right;
	int	*left;

	right = board->visibles[3];
	left = board->visibles[2];
	row = 0;
	while (row < 4)
	{
		if (right[row] == 1 && left[row] == 2)
		{
			put_num(board, row, 3, 4);
			put_num(board, row, 0, 3);
			return ;
		}
		else if (right[row] == 1)
		{
			put_num(board, row, 3, 4);
			return ;
		}
		row++;
	}
}

void	fill_1(t_board *board)
{
	fill_1up(board);
	fill_1down(board);
	fill_1left(board);
	fill_1right(board);
}
