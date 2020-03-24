/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnormcor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 18:38:05 by wnormcor          #+#    #+#             */
/*   Updated: 2020/03/16 18:38:06 by wnormcor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\includes\bsq.h"

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
		while (++i < argc)
		{
			do_bsq(argv[i]);
			if (i != argc - 1)
				write(1, "\n", 1);
		}
	else
		do_bsq(0);
	return (0);
}
