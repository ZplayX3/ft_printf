#include "libft.h"

void	ft_printd(va_list ap)
{
	int	d;

	d = va_arg(ap, int)
	ft_putnbr_fd(d, 1);
}
