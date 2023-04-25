#include "libft.h"

int	(va_list ap)
{
	int	len;
	char 	*s;

	s = va_arg(ap, char *);
	ft_putstr(s, 1);
	len = ft_strlen(s);
	return (len);
}
