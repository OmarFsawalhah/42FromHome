<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 23:33:50 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/29 20:22:05 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> origin/main
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
<<<<<<< HEAD
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	src_len = ft_strlen(src);
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
=======
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
>>>>>>> origin/main
}
