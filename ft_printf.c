#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	va_list		ap;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_hub(format[i + 1], ap);
		}
		i++;
	}
	return (len);
}
