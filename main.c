/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:16:29 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/06 17:38:22 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		num;
	int		real_total = 0;

	num = 123;
	int *ptr = &num;
// %c
	printf("==============================\n");
	ft_printf("Hola %%c\n");
	real_total = printf("Hola %%c\n");
	printf("real_total:%d\n", real_total);
	printf("==============================\n");
// %s
	printf("==============================\n");
	ft_printf("Hola %s\n", "buenas");
	real_total = printf("Hola %s\n", "buenas");
	printf("real_total:%d\n", real_total);
	printf("==============================\n");
// %d %i
	printf("==============================\n");
	ft_printf("Decimal numbers: %i | %d\n", 91, -91);
	real_total = printf("\nDecimal numbers: %i | %d", 91, -91);
	printf("real_total:%d\n", real_total);
	printf("==============================\n");
// %u
	printf("==============================\n");
	ft_printf("Decimal unsigned number: %u\n", 91);
	real_total = printf("Decimal unsigned number: %u\n", 91);
	printf("real_total:%d\n", real_total);
	printf("==============================\n");
// %x
	printf("==============================\n");
	ft_printf("Hex number: %x\n", -91);
	real_total = printf("Hex number: %x\n", -91);
	printf("real_total:%d\n", real_total);
	printf("==============================\n");
// %X
	printf("==============================\n");
	ft_printf("Hex upper number: %X\n", 91);
	real_total = printf("Hex upper number: %X\n", 91);
	printf("real_total:%d\n", real_total);
	printf("==============================\n");
// %p
	printf("==============================\n");
	ft_printf("Address: %p\n", ptr);
	real_total = printf("Address: %p\n", ptr);
	printf("real_total:%d\n", real_total);
	printf("==============================\n");

// Lenngth of the printf
	return (0);
}
