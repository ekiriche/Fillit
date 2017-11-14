/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:50:26 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/07 14:43:41 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_lul(void)
{
	char	*lul;

	lul = (char*)malloc(sizeof(*lul) + 1);
	lul[0] = '\0';
	return (lul);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*ans;
	int		i;

	if (!s)
		return (NULL);
	start = 0;
	i = -1;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (end == -1)
		return (ft_lul());
	if (!(ans = (char*)malloc(sizeof(*ans) * (end + 1 - start) + 1)))
		return (NULL);
	while (start + ++i <= end)
		ans[i] = s[start + i];
	ans[i] = '\0';
	return (ans);
}
