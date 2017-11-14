/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 12:35:01 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/27 13:17:49 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*ans;
	size_t	i;

	if (!(ans = (char*)malloc(sizeof(*ans) * ft_strlen(str) + 1)))
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		ans[i] = str[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
