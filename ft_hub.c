int	ft_hub(char c, va_list ap)
{
	if (c == 'c')
		return(ft_printc(ap));
	if (c == 's')
		return (ft_prints(ap));
	if (c == 'p')
		return (ft_printp(ap));
	if (c == 'd')
		return (ft_printd(ap));
	if (c == 'i')
		return (ft_printi(ap));
	if (c == 'u')
		return (ft_printu(ap));
	if (c == 'x')
		return (ft_printx(ap));
	if (c == 'X')
		return (ft_print_caps_x(ap));
	if (c == '%')
		return (ft_print_percent(ap));
}
