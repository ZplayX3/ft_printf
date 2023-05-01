#include "ft_printf.h"

int	ft_printx(unsigned int n)
{
	int	len;
	char	*hex;

	len = 1;
	hex = "0123456789abcdef";
	if (n >= 16)
		len = ft_printx(n / 16) + 1;
	ft_putchar_fd(hex[n % 16], 1);
	return (len);
}
