/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 18:10:50 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/22 18:04:06 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

int		my_sqrt(int num)
{
	int i;

	i = 2;
	while (i * i < num)
		i++;
	return (i);
}

int		validation(t_map *elem, t_tetr *figure, int x, int y)
{
	int			i;
	int			j;

	i = 0;
	if (figure->height + x > elem->size)
		return (0);
	while (i < figure->height)
	{
		j = 0;
		while (j < figure->width)
		{
			if (figure->tetr[i][j] == figure->symbol &&
					elem->map[x + i][y + j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	insert_tetr(elem, figure, new_point(x, y), figure->symbol);
	return (1);
}

void	insert_tetr(t_map *elem, t_tetr *figure, t_point *coords, char c)
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
				elem->map[coords->x + i][coords->y + j] = c;
			j++;
		}
		i++;
	}
	free_point(coords);
}

int		ultimate_solver(t_map *legacy, t_list *supreme)
{
	int		i;
	int		j;
	t_tetr	*figure;

	i = 0;
	if (supreme == NULL)
		return (1);
	figure = (t_tetr*)(supreme->content);
	while (i <= legacy->size - figure->height)
	{
		j = 0;
		while (j <= legacy->size - figure->width)
		{
			if (validation(legacy, figure, i, j))
			{
				if (ultimate_solver(legacy, supreme->next))
					return (1);
				else
					insert_tetr(legacy, figure, new_point(i, j), '.');
			}
			j++;
		}
		i++;
	}
	return (0);
}

t_map	*ulti_ulti_solver(t_list *list)
{
	int		size;
	t_map		*lul;

	size = my_sqrt(ft_lstcount(list) * 4);
	lul = build_map(size);
	while (!ultimate_solver(lul, list))
	{
		free_map(lul);
		size++;
		lul = build_map(size);
	}
	return (lul);
}
