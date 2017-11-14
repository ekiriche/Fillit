/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 13:53:19 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/06 17:47:20 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int					i;
	int					is_neg;
	unsigned long int	ans;

	i = 0;
	ans = 0;
	is_neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		ans = ans * 10 + (str[i++] - 48);
	if (ans > 9223372036854775807 && is_neg == -1)
		return (0);
	if (ans > 9223372036854775807 && is_neg == 1)
		return (-1);
	return (ans * is_neg);
}
