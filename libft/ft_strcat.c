/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:42:57 by ekiriche          #+#    #+#             */
/*   Updated: 2017/10/25 18:02:41 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(str1);
	while (str2[j] != '\0')
	{
		str1[i + j] = str2[j];
		j++;
	}
	str1[i + j] = '\0';
	return (str1);
}
