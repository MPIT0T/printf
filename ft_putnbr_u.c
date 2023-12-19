/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:04:17 by mpitot            #+#    #+#             */
/*   Updated: 2023/12/19 12:14:27 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_u(unsigned int n, int state)
{
	if (n < 10)
	{
		if (ft_putchar((int) n + 48)) == -1)
			state = -1
		return (1);
	}
	return (ft_putnbr_u(n / 10) + ft_putchar((((int) (n % 10) + 48))));
}