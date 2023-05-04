/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:50:38 by event             #+#    #+#             */
/*   Updated: 2023/05/04 13:53:36 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printi(va_list ap)
{
	int	i;
	int	len;
	int	nb;

	len = 1;
	i = va_arg(ap, int);
	nb = i;
	ft_putnbr_fd(i, 1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	return (len);
}
