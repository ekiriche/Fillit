/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:00:47 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/27 20:09:06 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ans;

	if (!(ans = (char*)malloc(sizeof(*ans) * size)))
		return (NULL);
	ft_memset(ans, 0, size);
	return (ans);
}
