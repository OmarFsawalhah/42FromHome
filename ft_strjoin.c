<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:07:18 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/29 19:09:46 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> origin/main
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
<<<<<<< HEAD
	char				*result;
	size_t				i;
	size_t				j;

	i = 0;
	j = 0;
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
=======
	char	*result;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1); // 1 For Null terminator
>>>>>>> origin/main
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i ++;
	}
	while (s2[j])
	{
		result[i] = s2[j];
		i ++;
		j ++;
	}
	result[i] = '\0';
	return (result);
}
<<<<<<< HEAD
=======
#include <stdio.h>
int	main(void)
{
	char	*s1 = "omar";
	char	*s2 = "42";
	printf("%s", 	ft_strjoin(s1 , s2));
}
>>>>>>> origin/main
