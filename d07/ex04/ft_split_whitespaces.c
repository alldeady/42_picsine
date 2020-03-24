/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:48:25 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/05 22:06:01 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

int		isp(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

void	put_words(int count_words, char *str, char **array_str)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (count_words-- > 0)
	{
		while (str[i] && isp(str[i]))
			i++;
		j = i;
		while (str[j] && !isp(str[j]))
			j++;
		array_str[x] = (char *)malloc(sizeof(char) * (j - i + 1));
		ft_strncpy(array_str[x++], str + i, j - i);
		i = j;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		count_words;
	char	**array_str;

	i = -1;
	count_words = 0;
	while (str[++i])
		if ((i == 0 && !isp(str[i])) || (!isp(str[i]) && isp(str[i - 1])))
			count_words++;
	array_str = (char **)malloc(sizeof(char **) * (count_words + 1));
	array_str[count_words] = 0;
	put_words(count_words, str, array_str);
	return (array_str);
}
