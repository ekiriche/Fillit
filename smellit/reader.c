/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:25:07 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/20 18:58:22 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

int					ft_check_cheburek(int i, char *s, int count)
{
	if (i + 1 <= 19 && s[i + 1] == '#' && i + 5 <= 19 && s[i + 5] == '#')
		return (1);
	if (i + 1 <= 19 && s[i + 1] == '#' && i + 10 <= 19 && s[i + 10] == '#')
		return (1);
	if (i + 5 <= 19 && s[i + 5] == '#' && s[i + 2] == '#' && s[i + 1] != '\n')
		return (1);
	if (((i - 10 >= 0 && s[i - 10] == '#') ||
		(i - 5 >= 0 && s[i - 5] == '#') ||
		(i + 5 <= 19 && s[i + 5] == '#') ||
		(i + 10 <= 19 && s[i + 10] == '#')) && count != 0)
		return (1);
	return (0);
}

void				lul(int *count, int *i)
{
	*count += 1;
	*i += 1;
}

char				*ft_input_to_tetras(char *s, char c)
{
	int		i;
	int		j;
	char	*res;
	int		count;

	i = -1;
	j = 0;
	count = 0;
	res = ft_memalloc(21);
	while (s[++i])
	{
		while (s[i] == '#')
		{
			res[j++] = c;
			lul(&count, &i);
		}
		if (ft_check_cheburek(i, s, count))
			res[j++] = s[i];
		if (count == 4)
			break ;
		if (s[i] == '\n' && count != 0)
			res[j++] = '\n';
	}
	res[j] = '\0';
	return (res);
}

t_list				*read_tetris(int fd)
{
	char	*elem;
	char	symbol;
	char	*buff;
	int		i;
	t_list	*list;

	symbol = 'A';
	list = NULL;
	buff = ft_strnew(21);
	while ((i = read(fd, buff, 21)))
	{
		if (i <= 19)
			return (free_list(&list));
		if (check_smth(buff) == 0 || check_form(buff) == 0 || symbol >= 91 ||
			(elem = ft_input_to_tetras(buff, symbol++)) == NULL)
		{
			ft_memdel((void**)&buff);
			return (free_list(&list));
		}
		ft_lstadd(&list, ft_lstnew(elem, sizeof(elem)));
		ft_memdel((void**)&elem);
	}
	ft_memdel((void**)&buff);
	ft_lstrev(&list);
	return (list);
}
