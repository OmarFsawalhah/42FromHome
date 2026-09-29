#include "libft.h"

static void	put_positive(long number, int fd)
{
	char	digit;

	if (number >= 10)
		put_positive(number / 10, fd);
	digit = (number % 10) + '0';
	write(fd, &digit, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	put_positive(number, fd);
}
