/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:08:46 by mpitot            #+#    #+#             */
/*   Updated: 2023/12/19 12:15:08 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_recurs(uintptr_t n, const char *base)
{
	if (n < 16)
		return (ft_putchar(base[n]));
	return (ft_recurs(n / 16, base) + ft_putchar(base[n % 16]));
}

int		ft_putmem(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_recurs(((uintptr_t) ptr), "0123456789abcdef"));
}