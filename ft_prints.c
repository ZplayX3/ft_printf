#include "libft.h"

void	(va_list ap)
{
	char *s;
	s = va_arg(ap, char *);
	ft_putstr(s, 1);
}
