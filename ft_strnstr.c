#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while(i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return(NULL);

}
