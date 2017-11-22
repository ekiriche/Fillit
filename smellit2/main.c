/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpolosuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 09:59:23 by dpolosuk          #+#    #+#             */
/*   Updated: 2017/11/22 16:06:19 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

int					main(int argc, char **argv)
{
	int		fd;
	t_list	*lul;
	t_map	*keen;

	if (argc != 2)
	{
		write(1, "usage: fillit source_file\n", 26);
		return (0);
	}
	if (!check_back(argv[1]))
		print_error();
	fd = open(argv[1], O_RDONLY);
	lul = read_tetris(fd);
	if (lul == NULL)
		print_error();
	keen = ulti_ulti_solver(lul);
	print_map(keen->map);
	free_map(keen);
	free_list(&lul);
	return (0);
}
