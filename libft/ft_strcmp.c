/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:36:13 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/07 16:55:34 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int i;

	i = 0;
	while ((unsigned char)str1[i] == (unsigned char)str2[i]
			&& (unsigned char)str1[i] != '\0'
			&& (unsigned char)str2[i] != '\0')
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
