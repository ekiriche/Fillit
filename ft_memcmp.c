/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 12:44:31 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/27 13:14:32 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *((unsigned char*)s1 + i) == *((unsigned char*)s2 + i))
		i++;
	if (i == n)
		return (0);
	return (*((unsigned char*)s1 + i) - *((unsigned char*)s2 + i));
}
