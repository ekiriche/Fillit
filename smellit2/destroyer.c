/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:57:59 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/22 18:01:27 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//asd
#include "fillit.h"
#include "libft/libft.h"

t_list	*free_list(t_list **elem)
{
	t_list	*cur;
	t_list	*next;

	cur = *elem;
	while (cur)
	{
		next = cur->next;
		free_tetr(cur->content);
		cur->content_size = 0;
		free(cur);
		cur = next;
	}
	*elem = NULL;
	return (*elem);
}

void	free_map(t_map *elem)
{
	int	i;

	i = 0;
	while (elem->map[i])
	{
		ft_memdel((void**)&elem->map[i]);
		i++;
	}
	elem->size = 0;
	ft_memdel((void**)&elem->map);
	ft_memdel((void**)&elem);
}

void	free_tetr(t_tetr *elem)
{
	int i;

	i = 0;
	while (elem->tetr[i])
	{
		ft_memdel((void**)&elem->tetr[i]);
		i++;
	}
	ft_memdel((void**)&elem->tetr);
	elem->symbol = 0;
	elem->height = 0;
	elem->width = 0;
	ft_memdel((void**)&elem);
}

void	free_point(t_point *elem)
{
	elem->x = 0;
	elem->y = 0;
	ft_memdel((void**)&elem);
}
