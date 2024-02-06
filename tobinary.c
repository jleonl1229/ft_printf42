/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tobinary.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:08:40 by jleon-la          #+#    #+#             */
/*   Updated: 2024/02/06 15:14:20 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_tobnary(int num, char *base, int x)
{
	int	i;

	i = 0;
	while (i < x && num > 0)
	{
		if (num > 0)
			i += ft_tobnary(num / 2, base, x);
	}
	return (write(1, base[num % 2], 1) + i);
}

int	ft_tohex(int num, char *base)
{
	if (num > 0)
		ft_tohex(num / 10, base);
	return (write(1, &base[num % 10], 1));
}

int	main(void)
{
	int	num;

	num = 5;
	ft_tohex(14, "123456789abcdef");
	ft_tobnary(5, "0123456789abcdef", 2);
	return (0);
}
