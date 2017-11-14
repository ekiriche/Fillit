/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:24:28 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/06 18:32:11 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst)
	{
		while (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			tmp = *alst;
			*alst = (*alst)->next;
			free(tmp);
			tmp = NULL;
		}
	}
}
