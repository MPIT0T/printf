/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:40:18 by mpitot            #+#    #+#             */
/*   Updated: 2023/12/15 11:58:54 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(const char *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	return ((int) write(1, s, ft_strlen(s)));
}