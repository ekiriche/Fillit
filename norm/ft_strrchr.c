/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 19:11:40 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/01 19:24:55 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*point;

	point = (char*)s + ft_strlen(s);
	while (*point != c)
	{
		if (point == s)
			return (NULL);
		point--;
	}
	return (point);
}
