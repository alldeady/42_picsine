/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:37:01 by csnowbal          #+#    #+#             */
/*   Updated: 2020/02/27 20:54:17 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	symbol;

	symbol = 'a';
	while (symbol <= 'z')
	{
		ft_putchar(symbol);
		symbol++;
	}
}
