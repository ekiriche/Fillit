/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:25:24 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/22 18:02:11 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include "sys/types.h"
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_tetr
{
	char		**tetr;
	int			height;
	int			width;
	char		symbol;
}				t_tetr;

typedef struct	s_map
{
	char		**map;
	int			size;
}				t_map;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

void			print_error(void);
int				check_smth(char *str);
int				check_form(char *str);
int				ft_check_cheburek(int i, char *s, int count);
void			lul(int *count, int *i);
char			*ft_input_to_tetras(char *s, char c);
t_list			*read_tetris(int fd);
t_point			*new_point(int x, int y);
t_map			*build_map(int size);
void			print_map(char **str);
t_list			*free_list(t_list **elem);
t_tetr			*new_tetr(char **tetr);
void			free_map(t_map *elem);
int				validation(t_map *elem, t_tetr *figure, int x, int y);
void			insert_tetr(t_map *elem,
				t_tetr *figure, t_point *coords, char c);
int				ultimate_solver(t_map *legacy, t_list *supreme);
t_map			*ulti_ulti_solver(t_list *list);
int				check_back(char *str);
void			free_point(t_point *lul);
void			free_tetr(t_tetr *asd);

#endif
