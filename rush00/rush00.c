/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 21:33:37 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/01 21:34:17 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, char left, char middle, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(right);
		ft_putchar('\n');
	}
}
void	rush(int x, int y)
{
	if (y >= 1)
		print(x, 'o', '-', 'o');
	if (y >= 3)
	{	
		while (y-- != 2)
			print(x, '|', ' ', '|');
		y++;
	}
	if (y >= 2)
		print(x, 'o', '-', 'o');
}
