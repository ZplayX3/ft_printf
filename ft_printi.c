#include "libftprintf.h"

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

