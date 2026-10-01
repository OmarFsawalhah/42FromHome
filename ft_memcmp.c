<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 23:25:49 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/29 19:26:22 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> origin/main
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
<<<<<<< HEAD
	const unsigned char	*b1;
	const unsigned char	*b2;
	size_t				i;
=======
	const unsigned char *b1;
	const unsigned char *b2;
	int	i;
>>>>>>> origin/main

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
