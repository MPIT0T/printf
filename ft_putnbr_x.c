/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:16:49 by mpitot            #+#    #+#             */
/*   Updated: 2023/12/18 14:58:17 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_x(unsigned int nbr, char *base)
{
	if (nbr < 16)
		return (ft_putchar(base[nbr]));
	else
		return (ft_putnbr_x(nbr / 16, base) + ft_putchar(base[nbr % 16]));
}
