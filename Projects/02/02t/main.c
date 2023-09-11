/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:59:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2023/09/03 16:10:36 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
// typedef struct s_numbers
// {
// 	int	key,
// 	char	*value,
// }	t_numbers;
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_is_numberic(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
		*str++;
	}
	return (0);
}

int	ft_open_read_close(char *str)
{
	char	buffer[712];
	int		fd;
	int		n;

	fd = open("./numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	n = read(fd, buffer, 700);
	ft_putstr(buffer);
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc <= 1 || argc > 3
		|| ft_is_numberic(argv[1]) || ft_open_read_close(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
}

/*
	unsigned long long int valor = 1000000000000000000000000000000000000;
*/
