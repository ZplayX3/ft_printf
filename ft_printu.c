#include "libftprintf.h"

int	ft_printu(unsigned int n)
{
	int		len;
	char		*dec;

	dec = "0123456789";
	if (n >= 10)
		len = ft_printu(n / 10) + 1;
	ft_putchar_fd(dec[n % 10], 1);
	return (len);
}
