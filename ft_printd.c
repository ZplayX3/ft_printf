/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:51:54 by event             #+#    #+#             */
/*   Updated: 2023/05/04 16:31:32 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printd(va_list ap)
{
	int	d;
	int	len;
	int	nb;

	len = 1;
	d = va_arg(ap, int);
	nb = d;
	ft_putnbr_fd(d, 1);
	if (nb < 0)
	{
		if (nb == -2147483648)
			nb += 1;
		nb = -nb;
		len++;
	}
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	return (len);
}
