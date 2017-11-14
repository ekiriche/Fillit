/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:16:53 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/01 18:32:41 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		ans[i] = (*f)(s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
