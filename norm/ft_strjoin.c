/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:13:01 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/27 19:42:14 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	len1;
	size_t	len2;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = -1;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(ans = (char*)malloc(sizeof(*ans) * (len1 + len2) + 1)))
		return (NULL);
	while (s1[++i])
		ans[i] = s1[i];
	j = 0;
	while (len2--)
	{
		ans[i] = s2[j];
		i++;
		j++;
	}
	ans[i] = '\0';
	return (ans);
}
