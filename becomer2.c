/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   becomer2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:44:23 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/06 17:52:21 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(unsigned long long int address, char *base)
{
	int	i;

	i = 0;
	if (address >= 16)
		i += ft_address((unsigned long int)address / 16, base);
	i += write(1, &base[address % 16], 1);
	return (i);
}
