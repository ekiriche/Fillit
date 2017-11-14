/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:02:13 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/04 12:10:50 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(ans = (char*)malloc(sizeof(*ans) * len + 1)))
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
