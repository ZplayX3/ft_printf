#include "libft.h"

int	ft_printp(va_list ap)
{
	unsigned long	n;
	int		len;
	char		*hex;

	n = va_arg(ap, int);
	hex = "0123456789abcdef";
	if (n > 16)
		len = ft_printp(n / 16) + 1;
	ft_putchar_fd(hex[n % 16], 1);
	return (len);
}
