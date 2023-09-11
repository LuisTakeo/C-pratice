/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:52:43 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 18:30:56 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cc -D TEST *.c */*.c && ./a.out
#ifdef TEST
# include <assert.h>
# include "../board.h"

void	assert_board_square(t_board *board, int row, int col, int num);
void	assert_board_row(t_board *board, int row, int expected_row[4]);
void	assert_board_col(t_board *board, int col, int expected_col[4]);

void	test_board_init()
{
	t_board board;
	int row = 0;
	int	zeros[4] = { 0, 0, 0, 0 };
	init_board(&board);
	while (row < 4)
	{
		assert_board_row(&board, row, zeros);
		row++;
	}
}

void	test_board_visible4()
{
	t_board board = {
		.matrix = {0},
		.visibles = {
			{1, 2, 2, 2},
			{4, 2, 1, 3},
			{1, 2, 2, 3},
			{3, 1, 2, 2}
		},
	};

	fill_4sequence(&board);
	int expect_column[4] = {4, 3, 2, 1};
	assert_board_col(&board, 0, expect_column);
}

int	main(void)
{
	test_board_init();
	test_board_visible4();
}

void	assert_board_square(t_board *board, int row, int col, int expected_num)
{
	int	actual_num = board->matrix[row][col];
	assert(actual_num == expected_num);
	
}

void	assert_board_row(t_board *board, int row, int expected_row[4])
{
	int col;

	col = 0;
	while (col < 4)
	{
		assert_board_square(board, row, col, expected_row[col]);
		col++;
	}
}

void	assert_board_col(t_board *board, int col, int expected_col[4])
{
	int row;

	row = 0;
	while (row < 4)
	{
		assert_board_square(board, row, col, expected_col[row]);
		row++;
	}
}
#endif
