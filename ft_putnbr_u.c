/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:04:17 by mpitot            #+#    #+#             */
/*   Updated: 2023/12/18 21:25:28 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_u(unsigned int n)
{
	if (n < 10)
		return (ft_putchar((((int) n + 48))));
	return (ft_putnbr_u(n / 10) + ft_putchar((((int) (n % 10) + 48))));
}