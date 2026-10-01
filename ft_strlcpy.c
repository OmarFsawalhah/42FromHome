<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 23:36:24 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/29 20:41:33 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> origin/main
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
<<<<<<< HEAD

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
=======
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
>>>>>>> origin/main
}
