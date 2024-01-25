/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   becomer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:50:58 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/25 15:23:13 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getchar(char o, va_list args)
{
	char	c;

	if (o == 'c')
	{
		c = (char) va_arg(args, int);
		write(1, &c, 1);
		return (1);
	}
	return (0);
}

// int	ft_getstr(char *o, va_list args)
// {
// 	int		count;
// 	char	c;

// 	c = (char) va_arg(args, int);
// 	count = 0;
// 	while (*o != '\0')
// 	{
// 		o++;
// 		count++;
// 	}
// 	return (count);
// }
