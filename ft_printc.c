#include "libft.h"

void	ft_printc(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int)
	ft_putchar_fd(c, 1);
}
