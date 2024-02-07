/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   becomer2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:44:23 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/07 11:42:30 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(unsigned long long int address, char *base)
{
	int	i;

	i = 0;
	if (address >= 16)
		i += ft_address(address / 16, base);
	i += write(1, &base[address % 16], 1);
	return (i);
}

int	ft_tobnary(int num, char *base)
{
	int	i;

	i = 0;
	if (num > 0)
		i += ft_tobnary(num / 2, base);
	i += write(1, &base[num % 2], 1);
	return (i);
}
