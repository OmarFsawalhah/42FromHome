/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:34:37 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/15 14:56:36 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	x = s;
	i = 0;
	while (i < n)
	{
		x[i] = c;
		i++;
	}
	return (s);
}
