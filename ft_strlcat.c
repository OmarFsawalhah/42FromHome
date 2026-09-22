#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const	char *source;
	char	*destination;
	size_t	dst_len;
	int	i;

	source = src;
	destination = dst;
	dst_len = ft_strlen(dst);
	i = 0;

	while(i < size - dst_len - 1)
	{
		destination[dst_len + i] = source[i];
		i++;
	}
	destination[dst_len + i] = '\0';
	return (dst_len + ft_strlen(source));
}
