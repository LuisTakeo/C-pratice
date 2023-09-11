/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validadortest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julidos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:56:17 by julidos-          #+#    #+#             */
/*   Updated: 2023/08/27 22:02:34 by julidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	valid_string(char *str)
{
	int	len;
	int	occ_value;
	char	*p;

	p = str;
	len = 0;
	occ_value = 0;
	while (*p == '\0')
	{
		if (*p >= '1' && *p <= '4')
			occ_value++;
		len++;
		p++;
	}
	if (len < 31 && occ_value != 16)
		return (1);
	return (0);
}
