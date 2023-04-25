#include "libftprintf.h"

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
