/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_state.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:54:30 by julidos-          #+#    #+#             */
/*   Updated: 2023/08/27 21:57:40 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_state.h"

void	fill_line(t_board *board, int row)
{
	int	ind;
	int	*line;
	int	col;
	int	sum;

	line = board->matrix[row];
	ind = 0;
	col = -1;
	sum = 0;
	while (ind < 4)
	{
		if (line[ind] == 0)
		{
			col = ind;
		}
		sum = sum + line[ind];
		++ind;
	}
	if (col >= 0 && col < 4)
	{
		put_num(board, row, col, 10 - sum);
	}
	
}

void	fill_col(t_board *board, int col)
{
	int	ind;
	int	row;
	int	sum;

	ind = 0;
	row = -1;
	sum = 0;
	while (ind < 4)
	{
		if (board->matrix[ind][col] == 0)
		{
			row = ind;
		}
		sum = sum + (board->matrix[ind][col]);
		++ind;
	}
	if(row >= 0 && row < 4)
	{
		put_num(board, row, col, 10 - sum);
	}
}

void	mark_found_nums(t_board *board, int num, int rows[4], int cols[4])
{
	int	i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board->matrix[i][j] == num)
			{
				rows[i]++;
				cols[j]++;
				break;
			}
			j++;
		}
		i++;
	}
}

void	fill_num(t_board *board, int num)
{ 
	int	cols[4];
	int rows[4];
	int	i;
	int col;
	int row;

	i = -1;
	while (++i < 4)
	{
		cols[i] = 0;
		rows[i] = 0;
	}
	mark_found_nums(board, num, rows, cols);
	i = -1;
	while (++i < 4)
	{
		if (rows[i] == 0)
			row = i;
		if (cols[i] == 0)
			col = i;
	}
	if (row > 0 && col > 0)
		put_num(board, row, col, num);
}
