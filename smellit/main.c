/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:51:03 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/14 16:02:02 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		if (check_smth(argv[1]) && check_form(argv[1]))
			printf("%s\n", "YEA BOI");
		else
			print_error();
	}
}
