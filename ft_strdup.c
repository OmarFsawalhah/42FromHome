<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 23:31:45 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/22 23:33:12 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> origin/main
#include "libft.h"

char	*ft_strdup(const char *s1)
{
<<<<<<< HEAD
	char		*ptr;
	size_t		i;

	i = 0;
	ptr = malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
=======
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(ft_strlen(s1) + 1);
	if(ptr == NULL)
		return(NULL);
	while(s1[i])
>>>>>>> origin/main
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
<<<<<<< HEAD
	return (ptr);
=======
	return(ptr);
>>>>>>> origin/main
}
