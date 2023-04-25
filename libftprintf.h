#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>

int	ft_hub(char c, va_list ap);
int	ft_printc(va_list ap);
int	ft_prints(va_list ap);
int	ft_printp(va_list ap);
int	ft_printd(va_list ap);
int	ft_printi(va_list ap);
int	ft_printu(va_list ap);
int	ft_printx(va_list ap);
int	ft_print_caps_x(va_list ap);
int	ft_print_percent(va_list ap);
int	ft_printf(const char *format, ...);
#endif
