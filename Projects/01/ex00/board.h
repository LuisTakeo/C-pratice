/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:17:05 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 18:05:55 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H
# include "board_struct.h"

void	fill_4sequence(t_board *board);
void	fill_1(t_board *board);
void	fill_perspective_2_and_3(t_board *board);
void	print_board(t_board *board);
void	put_num(t_board *board, int row, int col, int num);
void	init_board(t_board *board);
#endif
