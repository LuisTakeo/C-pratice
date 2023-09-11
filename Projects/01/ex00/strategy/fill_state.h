/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_state.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julidos- <julidos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:28:42 by julidos-          #+#    #+#             */
/*   Updated: 2023/08/27 21:57:42 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_STATE_H
# define FILL_STATE_H
# include "../board.h"

void	fill_line(t_board *board, int row);
void	fill_col(t_board *board, int col);
void	fill_num(t_board *board, int num);

#endif
