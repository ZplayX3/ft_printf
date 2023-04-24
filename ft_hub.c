void	ft_hub(char c, va_list ap)
{
	if (c == 'c')
		ft_printc(ap);
	if (c == 's')
		ft_prints(ap);
	if (c == 'p')
		ft_printp(ap);
	if (c == 'd')
		ft_printd(ap);
	if (c == 'i')
		ft_printi(ap);
	if (c == 'u')
		ft_printu(ap);
	if (c == 'x')
		ft_printx(ap);
	if (c == 'X')
		ft_printX(ap);
	if (c == '%')
		ft_print_percent(ap);
}
