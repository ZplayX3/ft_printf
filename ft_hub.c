/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:44:14 by event             #+#    #+#             */
/*   Updated: 2023/05/04 16:24:05 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hub(char c, va_list ap)
{
	unsigned long	p;

	if (c == 'c')
		return (ft_printc(ap));
	if (c == 's')
		return (ft_prints(ap));
	if (c == 'p')
	{
		p = va_arg(ap, unsigned long);
		ft_putstr_fd("0x", 1);
		return (ft_printp(p) + 2 * !!p);
	}
	if (c == 'd' || c == 'i')
		return (ft_printd(ap));
	if (c == 'u')
		return (ft_printu(va_arg(ap, unsigned int)));
	if (c == 'x')
		return (ft_printx(va_arg(ap, unsigned int)));
	if (c == 'X')
		return (ft_print_caps_x(va_arg(ap, unsigned int)));
	if (c == '%')
		return (ft_print_percent());
	return (0);
}
