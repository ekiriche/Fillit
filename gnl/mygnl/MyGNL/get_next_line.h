/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:33:50 by ekiriche          #+#    #+#             */
/*   Updated: 2018/01/06 10:33:55 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 32

int		get_next_line(int const fd, char **line);

#endif
