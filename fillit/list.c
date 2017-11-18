/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:57:59 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/18 15:24:08 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

t_list	*free_list(t_list **elem)
{
	t_list	*cur;
	t_list	*next;

	cur = *elem;
	while (cur)
	{
		next = cur->next;
		ft_memdel((void**)&cur->content);
		cur->content_size = 0;
		free(cur);
		cur = next;
	}
	*elem = NULL;
	return (*elem);
}
