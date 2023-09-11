/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 02:45:52 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 22:02:19 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state.h"
#include "./strategy/fill_state.h"

void	inc_state(t_board *board, int row, int col, int num)
{
	board->state.row_count[row]++;
	board->state.col_count[col]++;
	board->state.num_count[num]++;
	printf("%d row", board->state.row_count[row]);
	if (board->state.row_count[row] == 3)
	{
		fill_line(board, row);
	}
	if (board->state.col_count[col] == 3)
	{
		fill_col(board, col);
	}
	if (board->state.num_count[num] == 3)
	{
		fill_num(board, num);
	}
}
