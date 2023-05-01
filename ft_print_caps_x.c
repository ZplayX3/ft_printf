#include "ft_printf.h"

int	ft_print_caps_x(unsigned int n)
{
	int	len;
	char	*hex;

	len = 1;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		len = ft_print_caps_x(n / 16) + 1;
	ft_putchar_fd(hex[n % 16], 1);
	return (len);
}
