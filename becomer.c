/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   becomer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:50:58 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/06 18:04:46 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getchar(char o)
{
	write(1, &o, 1);
	return (1);
}

int	ft_getstr(char *o)
{
	int	i;

	i = 0;
	if (o == NULL)
		return (write(1, "(null)", 6));
	while (o[i] != '\0')
	{
		write(1, &o[i], 1);
		i++;
	}
	return (i);
}

int	ft_getint(int num, char *base)
{
	int	i;

	i = 0;
	if (num == -2147483648)
		return (write(1, "-2147483648", 11));
	if (num < 0)
	{
		num = num * (-1);
		write(1, "-", 1);
		i++;
	}
	if (num >= 10)
		i += ft_getint(num / 10, base);
	return (write(1, &base[num % 10], 1) + i);
}

int	ft_getunsigned(unsigned int num, char *base)
{
	int	i;

	i = 0;
	if (num >= 10)
		i += ft_getunsigned(num / 10, base);
	return (write(1, &base[num % 10], 1) + i);
}

int	ft_gethex(unsigned long int num, char *base)
{
	int		i;

	i = 0;
	if (num >= 16)
		i += ft_gethex(num / 16, base);
	i += write(1, &base[num % 16], 1);
	return (i);
}
