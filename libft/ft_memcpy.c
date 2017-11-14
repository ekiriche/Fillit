/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 15:09:56 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/26 17:57:17 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)d)[i] = ((unsigned char*)s)[i];
		i++;
	}
	return (d);
}
