/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:25:03 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/14 15:50:54 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_error(void)
{
	write(1, "error\n", 6);
	exit(0);
}

int		check_smth(char *str)
{
	int	i;
	int	count_dots;
	int	count_cell;

	i = 0;
	count_dots = 0;
	count_cell = 0;
	while (str[i])
	{
		if (str[i] == '.')
			count_dots++;
		if (str[i] == '#')
			count_cell++;
		i++;
	}
	if (count_dots == 12 && count_cell == 4 && i == 20)
		return (1);
	return (0);
}

int		check_form(char *str)
{
	int i;
	int	bounds;

	bounds = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			if (i - 1 >= 0 && str[i - 1] == '#')
				bounds++;
			if (i - 5 >= 0 && str[i - 5] == '#')
				bounds++;
			if (i + 1 <= 19 && str[i + 1] == '#')
				bounds++;
			if (i + 5 <= 19 && str[i + 5] == '#')
				bounds++;
		}
		i++;
	}
	if (bounds == 6 || bounds == 8)
		return (1);
	return (0);
}
