/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prevalidator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:34:10 by maurodri          #+#    #+#             */
/*   Updated: 2023/08/27 20:47:43 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_4_or_1(int perspective[4])
{
	int	i;
	int	occ4;
	int	occ1;

	i = 0;
	occ4 = 0;
	occ1 = 0;
	while (i < 4)
	{
		if (perspective[i] == 4)
			occ4++;
		else if (perspective[i] == 1)
			occ1++;
		i++;
	}
	return ((occ4 > 1) || (occ1 != 1));
}

int	validate_4_and_1(int perspective[4], int oppose_parsperpective[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((perspective[i] == 4) && (oppose_parsperpective[i] != 1))
			return (1);
		else if ((perspective[i] != 1) && (oppose_parsperpective[i] == 4))
			return (1);
	i++;
	}
	return (0);
}

int	validate_3(int perspective[4], int oppose_parsperpective[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((perspective[i] == 3) && (oppose_parsperpective[i] >= 3))
			return (1);
		else if ((perspective[i] >= 3) && (oppose_parsperpective[i] == 3))
			return (1);
	i++;
	}
	return (0);
}

int	validator(int arr_visibles[4][4])
{
	int	is_invalid;

	is_invalid = 0;
	is_invalid += validate_4_or_1(arr_visibles[0]);
	is_invalid += validate_4_or_1(arr_visibles[1]);
	is_invalid += validate_4_or_1(arr_visibles[2]);
	is_invalid += validate_4_or_1(arr_visibles[3]);
	is_invalid += validate_4_and_1(arr_visibles[0], arr_visibles[1]);
	is_invalid += validate_4_and_1(arr_visibles[2], arr_visibles[3]);
	is_invalid += validate_3(arr_visibles[0], arr_visibles[1]);
	is_invalid += validate_3(arr_visibles[2], arr_visibles[3]);
	return (is_invalid);
}
