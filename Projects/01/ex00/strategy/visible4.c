/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible4.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:56:05 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 20:51:29 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../board.h"

void	fill_4up(t_board *board)
{
	int	col;
	int	row;
	int	*up;

	up = board->visibles[0];
	col = 0;
	while (col < 4)
	{
		if (up[col] == 4)
		{
			row = 0;
			while (row < 4)
			{
				put_num(board, row, col, row + 1);
				row++;
			}
			return ;
		}
		col++;
	}
}

void	fill_4down(t_board *board)
{
	int	col;
	int	row;
	int	*down;

	down = board->visibles[1];
	col = 0;
	while (col < 4)
	{
		if (down[col] == 4)
		{
			row = 0;
			while (row < 4)
			{
				put_num(board, row, col, 4 - row);
				row++;
			}
			return ;
		}
		col++;
	}
}

void	fill_4left(t_board *board)
{
	int	col;
	int	row;
	int	*left;

	left = board->visibles[2];
	row = 0;
	while (row < 4)
	{
		if (left[row] == 4)
		{
			col = 0;
			while (col < 4)
			{
				put_num(board, row, col, col + 1);
				col++;
			}
			return ;
		}
		row++;
	}
}

void	fill_4right(t_board *board)
{
	int	col;
	int	row;
	int	*right;

	right = board->visibles[3];
	row = 0;
	while (row < 4)
	{
		if (right[row] == 4)
		{
			col = 0;
			while (col < 4)
			{
				put_num(board, row, col, 4 - col);
				col++;
			}
			return ;
		}
		row++;
	}
}

void	fill_4sequence(t_board *board)
{
	fill_4up(board);
	fill_4down(board);
	fill_4left(board);
	fill_4right(board);
}
