/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:16:29 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/02 18:03:44 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		num;

	num = 123;
// %c
	ft_printf("Hola %c\n", 'z');
	// printf("\nHola %c", 'z');
// %s
	ft_printf("Hola %s\n", "buenas");
	// printf("\nHola %s", "buenas");
// %d %i
	ft_printf("Decimal numbers: %i | %d\n", 91, 91);
	// printf("\nDecimal numbers: %i | %d", 91);
// %u
	ft_printf("Decimal unsigned number: %u\n", 91);
// %x
	ft_printf("Hex number: %x\n", 91);
	// printf("\nHex number: %x", 91);
	return (0);
}
