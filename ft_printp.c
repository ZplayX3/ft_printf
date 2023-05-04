/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:49:42 by event             #+#    #+#             */
/*   Updated: 2023/05/04 16:32:39 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long n)
{
	int			len;
	char		*hex;

	len = 1;
	hex = "0123456789abcdef";
	if (n == 0)
	{
		ft_putstr_fd("0", 1);
		return (3);
	}
	if (n >= 16)
		len = ft_printp(n / 16) + 1;
	ft_putchar_fd(hex[n % 16], 1);
	return (len);
}
