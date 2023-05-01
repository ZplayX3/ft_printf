#include "ft_printf.h"

int	ft_printp(unsigned long n)
{
	int		len;
	char		*hex;

	len = 1;
	hex = "0123456789abcdef";
	if (n == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	if (n >= 16)
		len = ft_printp(n / 16) + 1;
	ft_putchar_fd(hex[n % 16], 1);
	return (len);
}
