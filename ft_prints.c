#include "ft_printf.h"

int	ft_prints(va_list ap)
{
	int	len;
	char	*s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	return (len);
}
