/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 16:18:15 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/04 11:25:00 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char*)dst;
	s = (char*)src;
	i = -1;
	if (s < d)
	{
		while ((int)--len >= 0)
			*(d + len) = *(s + len);
	}
	else
		while (++i < len)
			*(d + i) = *(s + i);
	return (dst);
}
