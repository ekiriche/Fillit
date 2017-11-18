/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpolosuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 09:59:23 by dpolosuk          #+#    #+#             */
/*   Updated: 2017/11/18 17:48:30 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "fillit.h"

int					main(int argc, char **argv)
{
/*	int fd;
	t_list *lul;

	fd = open(argv[1], O_RDONLY);
	lul = read_tetris(fd);
	if (lul == NULL)
	{
		print_error();
		return (1);
	}
	while (lul)
	{
		printf("%s\n", lul->content);
		lul = lul->next;
	} */
	t_map *elem;

	elem = build_map(atoi(argv[1]));
	print_map(elem->map);
	free_map(elem);
	print_map(elem->map);
/*	t_tetr *xxx;

	xxx = new_tetr("AA\nA.\nA.");
	print_map(xxx->tetr);
	printf("%d\n", xxx->height);
	printf("%d\n", xxx->width); */
	return(0);
}
