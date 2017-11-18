/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 18:10:50 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/18 19:49:39 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

int		validation(t_map *elem, t_tetr *figure, int x, int y)
{
	int i;
	int j;

	i = 0;
	if (figure->height + x > elem->size)
		return (0);
	while (i < figure->height)
	{
		j = 0;
		while (j < figure->width)
		{
			if (figure->tetr[i][j] == figure->symbol && elem->map[x + i][y + j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	printf("%s\n", "YEA BOI");
	insert_tetr(elem, figure, x, y);
	return (1);
}

void	insert_tetr(t_map *elem, t_tetr *figure, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < figure->height)
	{
		j = 0;
		while (j < figure->width)
		{
			if (figure->tetr[i][j] == figure->symbol)
				elem->map[x + i][y + j] = figure->symbol;
			j++;
		}
		i++;
	}
}
