/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:25:03 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/18 15:47:29 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

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
	if (str[i] == '\n')
		return (0);
	while (str[i])
	{
		if (str[i] == '.')
			count_dots++;
		if (str[i] == '#')
			count_cell++;
		i++;
	}
//	printf("%d\n", count_dots);
//	printf("%d\n", count_cell);
//	printf("%d\n", i);
	if (count_dots == 12 && count_cell == 4 && i == 21)
		return (1);
	return (0);
}

int		check_back(char *str)
{
	//char	*buf;

	/*
	while ((i = read(fd, buff, 21)))
	if (str[len] == '\0' && str[len - 1] == '\n' && str[len - 2] == '\n')
		return (0);
	 * */
	return (1);
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
//	printf("%d\n", bounds);
	if (bounds == 6 || bounds == 8)
		return (bounds);
	return (bounds);
}
