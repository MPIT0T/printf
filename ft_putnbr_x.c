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

#include "printf.h"

int		ft_putnbr_x_u(unsigned int nbr, char *base)
{
	if (nbr < 16)
		return (ft_putchar(base[nbr]));
	else
		return (ft_putnbr_x_u(nbr / 16, base) + ft_putchar(base[nbr % 16]));
}

int		ft_putnbr_x(unsigned int n, int type)
{
	char	base[16];

	if (type == 0)
		ft_strcpy(base, "0123456789abcdef");
	else
		ft_strcpy(base, "0123456789ABCDEF");
//	if (n < 0)
//		return (ft_putchar('-') + ft_putnbr_x_u(n * -1, base));
	//else
	return (ft_putnbr_x_u(n, base));
}
