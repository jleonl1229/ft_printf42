/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:56:45 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/06 18:36:20 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void);
int	ft_getchar(char o);
int	ft_getstr(char *o);
int	ft_address(unsigned long long int address, char *base);
int	ft_getint(int num, char *base);
int	ft_getunsigned(unsigned int num, char *base);
int	ft_gethex(unsigned int num, char *base);

int	formats(char c, va_list args, int total)
{
	total = 0;

	if (c == 'c')
		total += ft_getchar(va_arg(args, int));
	else if (c == 's')
		total += ft_getstr(va_arg(args, char *));
	else if (c == 'p')
	{
		total += write(1, "0x", 2);
		total += ft_address(va_arg(args, unsigned long int), \
		"0123456789abcdef");
	}
	else if (c == 'x')
		total += ft_gethex(va_arg(args, unsigned int), \
		"0123456789abcdef");
	else if (c == 'X')
		total += ft_gethex(va_arg(args, unsigned int), \
		"0123456789ABCDEF");
	else if (c == 'i' || c == 'd')
		total += ft_getint(va_arg(args, int), "0123456789");
	else if (c == 'u')
		total += ft_getunsigned(va_arg(args, unsigned), "0123456789");
	else if (c == '%')
		total += write(1, "%", 1);
	return (total);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		total;
	int		i;

	total = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			total += formats(format[i], args, total);
		}
		else
			total += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (total);
}

// int	ft_printf(char const *format, ...)
// {
// 	va_list	args;
// 	int		total;
// 	int		i;

// 	total = 0;
// 	i = 0;
// 	va_start(args, format);
// 	while (format[i] != '\0')
// 	{
// 		if (format[i] == '%')
// 		{
// 			i++;
// 			if (format[i] == 'c')
// 				total += ft_getchar(va_arg(args, int));
// 			else if (format[i] == 's')
// 				total += ft_getstr(va_arg(args, char *));
// 			else if (format[i] == 'p')
// 			{
// 				total += write(1, "0x", 2);
// 				total += ft_address(va_arg(args, unsigned long int), \
// 				"0123456789abcdef");
// 			}
// 			else if (format[i] == 'x')
// 				total += ft_gethex(va_arg(args, unsigned int), \
// 				"0123456789abcdef");
// 			else if (format[i] == 'X')
// 				total += ft_gethex(va_arg(args, unsigned int), \
// 				"0123456789ABCDEF");
// 			else if (format[i] == 'i' || format[i] == 'd')
// 				total += ft_getint(va_arg(args, int), "0123456789");
// 			else if (format[i] == 'u')
// 				total += ft_getunsigned(va_arg(args, unsigned), "0123456789");
// 			else if (format[i] == '%')
// 				total += write(1, "%", 1);
// 		}
// 		else
// 			total += write(1, &format[i], 1);
// 		i++;
// 	}
// 	// printf("TOTAL: %d\n", total);
// 	va_end(args);
// 	return (total);
// }

// // // // With pointers
// // // void	formats(char c, va_list args, int *total)
// // // {
// // // 	if (c == 'c')
// // // 		(*total) += ft_getchar(va_arg(args, int));
// // // 	else if (c == 's')
// // // 		(*total) += ft_getstr(va_arg(args, char *));
// // // 	else if (c == 'p')
// // // 	{
// // // 		(*total) += write(1, "0x", 2);
// // // 		(*total) += ft_address(va_arg(args, unsigned long int), \
// // // 		"0123456789abcdef");
// // // 	}
// // // 	else if (c == 'x')
// // // 		(*total) += ft_gethex(va_arg(args, unsigned int), \
// // // 		"0123456789abcdef");
// // // 	else if (c == 'X')
// // // 		(*total) += ft_gethex(va_arg(args, unsigned int), \
// // // 		"0123456789ABCDEF");
// // // 	else if (c == 'i' || c == 'd')
// // // 		(*total) += ft_getint(va_arg(args, int), "0123456789");
// // // 	else if (c == 'u')
// // // 		(*total) += ft_getunsigned(va_arg(args, unsigned), "0123456789");
// // // 	else if (c == '%')
// // // 		(*total) += write(1, "%", 1);
// // // }

// // // int	ft_printf(char const *format, ...)
// // // {
// // // 	va_list	args;
// // // 	int		total;
// // // 	int		i;

// // // 	total = 0;
// // // 	i = 0;
// // // 	va_start(args, format);
// // // 	while (format[i] != '\0')
// // // 	{
// // // 		if (format[i] == '%')
// // // 		{
// // // 			i++;
// // // 			formats(format[i], args, &total);
// // // 		}
// // // 		else
// // // 			total += write(1, &format[i], 1);
// // // 		i++;
// // // 	}
// // // 	va_end(args);
// // // 	return (total);
// // // }

// Write returns the length of what prints as well as printf,
// 			thats why i've put line 43 that way
// 	in that case write will reurn 2 because prints 0x