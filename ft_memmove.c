/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 20:00:53 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/13 21:23:05 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*source;
	unsigned char		*destination;

	source = src;
	destination = dst;
	if (destination < source)
	{
		ft_memcpy(destination, source, n);
		return (destination);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			destination[i] = source[i];
		}
		return (destination);
	}
}
