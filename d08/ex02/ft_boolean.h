/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:38:17 by csnowbal          #+#    #+#             */
/*   Updated: 2020/03/06 13:45:33 by csnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define EVEN(x) ((x) % 2)
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG	"I have an odd number of arguments."
# define SUCCESS 0

# include <unistd.h>

typedef int	t_bool;

#endif
