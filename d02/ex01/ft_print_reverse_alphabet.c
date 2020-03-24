/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:33:14 by csnowbal          #+#    #+#             */
/*   Updated: 2020/02/27 20:54:38 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	symbol;

	symbol = 'z';
	while (symbol >= 'a')
	{
		ft_putchar(symbol);
		symbol--;
	}
}
