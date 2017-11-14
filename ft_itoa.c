/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:43:26 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/06 17:46:11 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		numlen(int n)
{
	int		len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

static char		*minvalue(int n)
{
	char	*ans;
	int		i;

	n = 0;
	i = 0;
	ans = (char*)malloc(sizeof(*ans) * 12);
	ans[0] = '-';
	ans[1] = '2';
	ans[2] = '1';
	ans[3] = '4';
	ans[4] = '7';
	ans[5] = '4';
	ans[6] = '8';
	ans[7] = '3';
	ans[8] = '6';
	ans[9] = '4';
	ans[10] = '8';
	ans[11] = '\0';
	return (ans);
}

static void		kek(int *nb, int *len)
{
	*nb *= -1;
	*len += 1;
}

char			*ft_itoa(int n)
{
	int		len;
	char	*ans;
	int		nb;

	len = numlen(n);
	nb = n;
	if (n == -2147483648)
		return (minvalue(n));
	if (n < 0)
		kek(&nb, &len);
	if (!(ans = (char*)malloc(sizeof(*ans) * len + 1)))
		return (NULL);
	ans[len - 1] = (nb % 10) + '0';
	while (nb /= 10)
		ans[--len - 1] = (nb % 10) + '0';
	if (n < 0)
	{
		ans[0] = '-';
		ans[numlen(n) + 1] = '\0';
	}
	else
		ans[numlen(n)] = '\0';
	return (ans);
}
