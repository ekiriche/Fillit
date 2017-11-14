/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 20:11:11 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/07 13:34:06 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			count++;
		}
		i++;
	}
	return (count);
}

static int		len_word(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ans;
	int		k;
	int		len;

	if (!s)
		return (NULL);
	if (!(ans = (char**)malloc(sizeof(*ans)
					* count_words((const char*)s, c) + 1)))
		return (NULL);
	k = 0;
	len = count_words((const char*)s, c);
	while (len--)
	{
		while (*s == c && *s != '\0')
			s++;
		ans[k] = ft_strsub((const char*)s, 0, len_word((const char*)s, c));
		if (ans[k] == NULL)
			return (NULL);
		s = s + len_word(s, c);
		k++;
	}
	ans[k] = NULL;
	return (ans);
}
