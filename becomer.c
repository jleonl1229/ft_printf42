/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   becomer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:50:58 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/05 15:35:35 by jleon-la         ###   ########.fr       */
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
	while (o[i] != '\0')
	{
		write(1, &o[i], 1);
		i++;
	}
	return (i);
}

int	ft_address(void *address, char *base)
{
	int		i;

	write(1, "0x", 2);
	i = 0;
	if (address >= 16)
		i = ft_address(address / 16, base);
	write(1, &base[address % 16], 1);
	return (i + 2);
}

int	ft_getint(int num, char *base)
{
	int	i;

	i = 0;
	if (num >= 10)
		i = ft_getint(num / 10, base);
	return (write(1, &base[num % 10], 1) + i);
}

int	ft_getunsigned(unsigned int num, char *base)
{
	int	i;

	i = 0;
	if (num >= 10)
		i = ft_getunsigned(num / 10, base);
	write(1, &base[num % 10], 1);
	return (i);
}

int	ft_gethex(int num, char *base)
{
	int	i;

	i = 0;
	if (num >= 16)
		i = ft_getint(num / 16, base);
	return (write(1, &base[num % 16], 1) + i);
}
