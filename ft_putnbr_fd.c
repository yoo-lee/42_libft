#include "libft.h"

void
    ft_putnbr_fd (int n, int fd)
{
unsigned int nbr;

	nbr = ABS(n);
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd((nbr + '0'), fd);
}
