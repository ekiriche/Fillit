/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:26:45 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/27 19:43:27 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ans;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(ans = (char*)malloc(sizeof(*ans) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		ans[i] = (*f)(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
