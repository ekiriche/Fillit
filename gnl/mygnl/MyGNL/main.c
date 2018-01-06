/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:34:03 by ekiriche          #+#    #+#             */
/*   Updated: 2018/01/06 10:34:07 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int	main(void)
{
	char	*line;
	int	fd;

	fd = open("42", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_putstr(line);
		ft_putchar('\n');
		ft_strdel(&line);
	}
	return (0);
}
