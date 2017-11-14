/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:00:07 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/25 17:39:57 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	int		i;
	int		ln;
	int		j;

	ln = ft_strlen(small);
	if (ln == 0)
		return ((char*)big);
	i = 0;
	j = 0;
	while (big[i])
	{
		while (big[i + j] == small[j])
		{
			if (j == ln - 1)
				return ((char*)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
