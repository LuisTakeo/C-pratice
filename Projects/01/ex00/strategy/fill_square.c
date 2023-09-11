/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:31:17 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 21:57:41 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../board.h"

int	find_num(int nums[5])
{
	int	i;
	int	num;

	i = -1;
	num = 0;
	while (++i < 4)
	{
		if (nums[i] == 0)
		{
			num = i;
		}
	}
	return (num);
}

void	fill_square(t_board *board, int row, int col)
{
	int	nums[5];
	int	i;
	int sum;
	int num;

	i = -1;
	while (++i < 5)
		nums[i] = 0;
	i = -1;
	while (++i < 4)
		nums[board->matrix[row][i]] += nums[board->matrix[row][1]] != 0;
	i = -1;
	while (++i < 4)
		nums[board->matrix[i][col]] += nums[board->matrix[row][1]] != 0;
	sum = (nums[1] != 0) + (nums[2] != 0) + (nums[3] != 0) + (nums[4] != 0);
	if (sum == 3)
		num = find_num(nums);
	if (num > 0 && num <= 4)
		put_num(board, row, col, num);
}
