/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:46:42 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/05 21:47:23 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*s;
	int		p;
	int		i;
	int		j;

	s = NULL;
	i = 1;
	p = 0;
	s = malloc((argc) * sizeof(char));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			s[p] = argv[i][j];
			j++;
			p++;
		}
		if ((i + 1) < argc)
			s[p] = '\n';
		i++;
		p++;
	}
	s[p - 1] = '\0';
	return (s);
}
