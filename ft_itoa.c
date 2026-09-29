#include "libft.h"

static size_t	number_length(long number)
{
	size_t	length;

	length = 0;
	if (number <= 0)
		length++;
	while (number != 0)
	{
		length++;
		number /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*string;
	long	number;
	size_t	length;

	number = n;
	length = number_length(number);
	string = malloc(length + 1);
	if (string == NULL)
		return (NULL);
	string[length] = '\0';
	if (number == 0)
		string[0] = '0';
	if (number < 0)
	{
		string[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		string[--length] = (number % 10) + '0';
		number /= 10;
	}
	return (string);
}
