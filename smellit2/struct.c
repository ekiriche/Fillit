/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:22:49 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/22 16:58:32 by ekiriche         ###   ########.fr       */
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

void		print_map(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putstr(str[i]);
		write(1, "\n", 1);
		i++;
	}
}

char		find_symbol(char **str)
{
	int		i;
	int		j;
	char	symbol;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '.' && str[i][j] != '\n' && str[i][j])
		{
			symbol = str[i][j];
			j++;
		}
		i++;
	}
	return (symbol);
}

t_tetr		*new_tetr(char **figure)
{
	int		height;
	int		width;
	t_tetr	*tetris;

	height = 0;
	width = 0;
	while (figure[height])
		height++;
	while (figure[0][width])
		width++;
	tetris = ft_memalloc(sizeof(t_tetr));
	tetris->height = height;
	tetris->width = width;
	tetris->tetr = figure;
	tetris->symbol = find_symbol(figure);
	return (tetris);
}
