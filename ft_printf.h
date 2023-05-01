#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

int	ft_hub(char c, va_list ap);
int	ft_printc(va_list ap);
int	ft_prints(va_list ap);
int	ft_printp(unsigned long n);
int	ft_printd(va_list ap);
int	ft_printu(unsigned int n);
int	ft_printx(unsigned int n);
int	ft_print_caps_x(unsigned int n);
int	ft_print_percent(void);
int	ft_printf(const char *format, ...);
#endif
