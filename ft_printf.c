/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:48:33 by event             #+#    #+#             */
/*   Updated: 2023/05/04 13:48:53 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	va_list			ap;
	int				len;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_hub(format[i + 1], ap);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			len ++;
		}
		i++;
	}
	return (len);
}
