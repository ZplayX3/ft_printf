#inlcude "libft.h"

void	ft_printi(va_list ap)
{
	int	i;

	i = va_arg(ap, i);
	ft_putnbr_fd(i, 1);
}

