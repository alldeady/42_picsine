/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 13:49:29 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/12 20:13:50 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		display(char *filename)
{
	int		file;
	char	name;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &name, 1))
		write(1, &name, 1);
	close(file);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}
