/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:12:12 by mpitot            #+#    #+#             */
/*   Updated: 2023/12/18 15:55:41 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_convert(char c, va_list args)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'x')
		return (ft_putnbr_x(va_arg(args, int), 0));
	else if (c == 'X')
		return (ft_putnbr_x(va_arg(args, int), 1));
	else if (c == 'p')
		return (ft_putmem(va_arg(args, void *)));
	else
		return (ft_putchar('%') + ft_putchar(c));
}

int		ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		res;

	va_start(args, format);
	i = 0;
	res = 0;
	while (format[i])
	{
		if (format[i] == '%')
			res += ft_convert(format[++i], args);
		else
			res += ft_putchar(format[i]);
		i++;
	}
	return (res);
	
}