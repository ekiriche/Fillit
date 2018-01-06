/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:33:38 by ekiriche          #+#    #+#             */
/*   Updated: 2018/01/06 11:18:27 by ekiriche         ###   ########.fr       */
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

static char			*buff_plus_temp(char *buff, char *temp)
{
	size_t	i;
	size_t	j;
	char	*ans;

	i = 0;
	if (buff)
		i = ft_strlen(buff);
	j = 0;
	if (temp)
		j = ft_strlen(temp);
	ans = (char *)malloc(sizeof(*temp) * (i + j + 1));
	ft_memcpy(ans, buff, i);
	ft_memcpy(ans + i, temp, j);
	ans[i + j] = '\0';
	return (ans);
}

static int			write_in_line(char **buff, char **line, char **temp)
{
	int				len;

	*buff = buff_plus_temp(*buff, *temp);
	len = find_endl(*buff);
	if (len != -42)
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
	int				is_okay;
	char			*temp;

	temp = ft_strnew(BUFF_SIZE);
	if (BUFF_SIZE < 0 || fd < 0 || !line || (ret = read(fd, temp, 0)) < 0)
		return (-1);
	while ((ret = read(fd, temp, BUFF_SIZE)) > 0)
	{
		is_okay = write_in_line(&buff[fd], line, &temp);
		ft_memdel((void**)&temp);
		if (is_okay == 1)
			return (1);
		temp = ft_strnew(BUFF_SIZE);
	}
	if ((is_okay = write_in_line(&buff[fd], line, &temp)))
		return (1);
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_memdel((void**)&buff[fd]);
		return (1);
	}
	return (0);
}
