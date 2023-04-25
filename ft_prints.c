#include "libftprintf.h"

int	ft_prints(va_list ap)
{
	int	len;
	char	*s;

	s = va_arg(ap, char *);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	return (len);
}
