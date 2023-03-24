int	ft_printf(const char *format, ...)
{
	unsigned int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_hub(format[i + 1]);
		}
		i++;
	}
}
