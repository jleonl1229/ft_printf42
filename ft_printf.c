/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:56:45 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/25 12:43:25 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	option(char o, va_list args)
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
			total += option((char) &format[++i], args);
		write(1, &format[i], 1);
		i++;
	}
	total += i;
	va_end(args);
	return (total);
}

int	main(void)
{
	ft_printf("Dragon ball %c", 'z');
	return (0);
}

// void ft_printf(int i, ...)
// {
//     va_list argptr; // esta linea declara la lista de parametros
//     va_start(argptr, i); // esta linea empieza el bucle 
//sobre la lista de parametros (sin saber el numero de parametros)
//    if ( i == 0 ) {
//       int n = va_arg( argptr, int ); // esto es para recuperar el 
//valor de cada parametro segun su tipo
//       printf( "%d\n", n );
//    } else {
//       char *s = va_arg( argptr, char* );
//       printf( "%s\n", s);
//    }
// }
// int main(void)
// {
//     ft_printf("%d",42);
//     printf("%s", "\n");
//     printf("%d",42);
// }
		// total += va_arg(args, int);