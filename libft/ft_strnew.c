/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 15:33:59 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/01 20:15:40 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ans;
	size_t	i;

	i = 0;
	if (!(ans = (char*)malloc(sizeof(*ans) * size + 1)))
		return (NULL);
	while (i < size)
	{
		ans[i] = '\0';
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
