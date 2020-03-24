/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 14:21:16 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/12 22:53:41 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int			ft_strlen(char *str)
{
	int		l;

	l = 0;
	while (*(str++) != '\0')
	{
		l++;
	}
	return (l);
}

void		error(char *filename)
{
	write(2, "cat: ", 5);
	write(2, filename, ft_strlen(filename));
	if (errno == 21)
		write(2, ": Is a directory\n", 17);
	else if (errno == 13)
		write(2, ": Permission denied\n", 20);
	else
		write(2, ": No such file or directory\n", 28);
}

void		display(int count, char *files[])
{
	int		file;
	char	buffer[10000];
	int		i;
	ssize_t	byte;
	char	*filename;

	i = 0;
	while (++i <= count)
	{
		filename = files[i];
		file = open(filename, O_RDWR);
		if (file < 0)
		{
			error(filename);
			continue;
		}
		while ((byte = read(file, &buffer, 10000)))
			write(1, &buffer, byte);
		close(file);
	}
}

void		write_in(void)
{
	char	c;

	while (read(0, &c, 1) > 0)
		write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		write_in();
	else
		display(argc - 1, argv);
	return (0);
}
