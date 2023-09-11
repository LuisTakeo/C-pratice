/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:01:11 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 20:53:33 by julidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_STRUCT_H
# define BOARD_STRUCT_H

typedef struct s_state
{
	int	num_count[5];
	int	row_count[4];
	int	col_count[4];
}	t_state;

typedef struct s_board
{
	int	matrix[4][4];
	int	visibles[4][4];
	t_state		state;
}	t_board;

#endif
