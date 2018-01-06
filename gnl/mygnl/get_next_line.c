/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:33:38 by ekiriche          #+#    #+#             */
/*   Updated: 2018/01/06 14:35:25 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static int			find_endl(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] == '\n')
		{
			str[len] = '\0';
			return (len);
		}
		len++;
	}
	return (-42);
}

static int			write_in_line(char **buff, char **line, char **temp)
{
	int				len;

	if (*buff)
		*buff = ft_strjoin(*buff, *temp);
	else
		*buff = ft_strdup(*temp);
	if ((len = find_endl(*buff)) != -42)
	{
		*line = ft_strdup(*buff);
		*buff = ft_strdup(*buff + len + 1);
		return (1);
	}
	return (0);
}

int					get_next_line(int const fd, char **line)
{
	static char		*buff[420];
	int				ret;
	int				n_found;
	char			*temp;

	temp = ft_strnew(BUFF_SIZE);
	if (BUFF_SIZE < 0 || fd < 0 || !line || (ret = read(fd, temp, 0)) < 0)
		return (-1);
	while ((ret = read(fd, temp, BUFF_SIZE)) > 0)
		if ((n_found = write_in_line(&buff[fd], line, &temp)) == 1)
		{
			ft_memdel((void**)&temp);
			return (1);
		}
	temp = ft_strnew(BUFF_SIZE);
	if ((n_found = write_in_line(&buff[fd], line, &temp)) == 1)
	{
		ft_memdel((void**)&temp);
		return (1);
	}
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_memdel((void**)&buff[fd]);
		return (1);
	}
	return (0);
}
