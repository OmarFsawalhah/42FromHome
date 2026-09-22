#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	char	*dest;
const	char	*srce;

	dest = dst;
	srce = src;

	i = 0;
	while ((i < size - 1 ) && (srce[i] != '\0'))
	{
		dest[i] = srce[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(srce));
}
