/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read_close.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:46:47 by hribeiro          #+#    #+#             */
/*   Updated: 2023/09/03 20:46:32 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "utils.h"

char	**ft_split_lines(char *str, int line, int column)
{
	char	**box;
	int		i;
	int		j;
	int		l;

	box = (char **)malloc(line * sizeof(char *));
	i = 0;
	j = 0;
	l = 0;
	while (str[i] != '\0')
	{
		box[l] = (char *)malloc(column * sizeof(char));
		while (str[i] != '\n')
		{
			box[l][j] = str[i];
			i++;
			j++;
		}
		box[l][j] = '\0';
		l++;
		i++;
		j = 0;
	}
	return (box);
}

int	ft_open_read_close(char *str)
{
	int		fd;
	int		n;
	char	buffer[712];
	char	**box;

	fd = open("./numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	n = read(fd, buffer, 700);
	box = ft_split_lines(buffer, 41, 60);
	n = 0;
	ft_putstr(str);
	while (n < 41)
	{
		ft_putstr(box[n]);
		free(box[n]);
		n++;
	}
	free(box);
	close(fd);
	return (0);
}
