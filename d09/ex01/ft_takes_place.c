/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:21:38 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/05 17:25:00 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d A.M. AND %d A.M.",
				hour + 12, hour + 1);
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d P.M. AND %d A.M.",
				hour - 12, hour - 11);
	else if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d A.M. AND %d A.M.",
				hour - 12, hour - 23);
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d A.M. AND %d P.M.",
				hour, hour + 1);
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d P.M. AND %d P.M.",
				hour, hour - 11);
	else if (hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d A.M. AND %d A.M.",
				hour, hour + 1);
	else
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d P.M. AND %d P.M.",
				hour - 12, hour - 11);
}
