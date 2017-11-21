/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:22:49 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/20 18:15:42 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

t_point		*new_point(int x, int y)
{
	t_point *elem;

	elem = ft_memalloc(sizeof(t_point));
	elem->x = x;
	elem->y = y;
	return (elem);
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

void		print_map(t_map *elem)
{
	int i;

	i = 0;
	while (elem->map[i])
	{
		ft_putstr(elem->map[i]);
		write(1, "\n", 1);
		i++;
	}
}

t_tetr		*new_tetr(char *tetr)
{
	t_tetr	*elem;
	char	**ans;
	int		height;
	int		width;
	int		i;

	ans = ft_strsplit(tetr, '\n');
	height = 0;
	width = 0;
	i = -1;
	while (ans[height])
		height++;
	while (ans[0][width])
		width++;
	elem = ft_memalloc(sizeof(t_tetr));
	while (tetr[++i])
	{
		if (tetr[i] != '.' && tetr[i] != '\n' && tetr[i])
			elem->symbol = tetr[i];
	}
	elem->tetr = ans;
	elem->height = height;
	elem->width = width;
	return (elem);
}
