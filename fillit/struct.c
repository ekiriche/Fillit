/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:22:49 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/18 14:57:54 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

t_point		*new_point(int x, int y)
{
	t_point *elem;

	elem = ft_memalloc(sizeof(t_point));
	elem->x = x;
	elem->y = y;
	return(elem);
}

t_map		*build_map(int size)
{
	t_map	*elem;
	int		x;
	int		y;

	elem = (t_map*)ft_memalloc(sizeof(t_map));
	elem->map = (char**)ft_memalloc(sizeof(char *) * size + 1);
	elem->size = size;
	x = 0;
	while (x < size)
	{
		y = 0;
		elem->map[x] = ft_strnew(size);
		while (y < size)
		{
			elem->map[x][y] = '.';
			y++;
		}
		elem->map[x][y] = '\0';
		x++;
	}
	elem->map[x] = NULL;
	return (elem);
}

void		print_map(char **map)
{
	int i;

	i = 0;
	while (map[i])
	{
		ft_putstr(map[i]);
		write(1, "\n", 1);
		i++;
	}
}

t_tetr		new_tetr(char **tetr, int height, int width, char symbol)
{
	t_tetr *elem;

	elem = ft_memalloc(sizeof(t_tetr));
	elem->tetr = tetr;
	elem->height = height;
	elem->width = width;
	elem->symbol = symbol;
	return (elem);
}
