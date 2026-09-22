#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *b1;
	const unsigned char *b2;
	int	i;

	b1 = s1;
	b2 = s2;
	i = 0;
	while (i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}
