/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:44:48 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/06 19:34:02 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	lens;

	if (*small == '\0')
		return ((char *)big);
	lens = ft_strlen(small);
	while (*big != '\0' && len-- >= lens)
	{
		if (*big == *small && ft_strncmp(big, small, lens) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
