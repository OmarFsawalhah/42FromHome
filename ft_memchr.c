<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 23:21:37 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/29 19:24:48 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> origin/main
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
<<<<<<< HEAD
	size_t			i;
	unsigned char	*s1;
=======
	int	i;
	unsigned	char *s1;
>>>>>>> origin/main

	i = 0;
	s1 = (unsigned char *) s;
	while (i < n)
	{
		if (s1[i] == c)
		{
			return ((char *) &s1[i]);
		}
		i++;
	}
	return (NULL);
}
<<<<<<< HEAD
=======

>>>>>>> origin/main
