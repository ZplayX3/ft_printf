#include "libft.h"

int	ft_print_caps_x(va_list ap)
{
	int	len;
	char	*hex;
	int	n;

	n = va_arg(ap, int);
	hex = "0123456789ABCDEF";
	if (n >= 16)
		len = ft_print_caps_x(n / 16) + 1;
	ft_putchar_fd(hex[n % 16]);
	return (len);
}
