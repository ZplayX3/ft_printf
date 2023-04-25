#include "libftprintf.h"

int	ft_printp(unsigned long n)
{
	int		len;
	char		*hex;

	hex = "0123456789abcdef";
	if (n > 16)
		len = ft_printp(n / 16) + 1;
	ft_putchar_fd(hex[n % 16], 1);
	return (len);
}
