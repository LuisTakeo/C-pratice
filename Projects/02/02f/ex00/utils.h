/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:59:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/09/03 19:44:08 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <fcntl.h>

int		ft_open_read_close(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_is_numberic(char *str);

#endif
