#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>

void	ft_hub(char c, va_list ap);
void	ft_printc(va_list ap);
void	ft_prints(va_list ap);
void	ft_printp(va_list ap);
void	ft_printd(va_list ap);
void	ft_printi(va_list ap);
void	ft_printu(va_list ap);
void	ft_printx(va_list ap);
void	ft_printX(va_list ap);
void	ft_print_percent(va_list ap);
int	ft_printf(const char *format, ...);
#endif
