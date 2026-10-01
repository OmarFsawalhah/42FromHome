<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:01:50 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/29 19:03:01 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> origin/main
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
<<<<<<< HEAD
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start ++;
	}
	while ((end > start) && ft_strchr(set, s1[end - 1]))
	{
		end --;
	}
	return (ft_substr(s1, start, end - start));
=======
	while(s1[start] && ft_strchr(set, s1[start]))
	{
		start ++;
	}
	while((end > start) && ft_strchr(set, s1[end - 1]))
	{
		end --;
	}
	return(ft_substr(s1, start, end - start);
>>>>>>> origin/main
}
