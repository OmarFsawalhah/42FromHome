<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osawalha <osawalha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 23:19:10 by osawalha          #+#    #+#             */
/*   Updated: 2026/09/29 20:24:58 by osawalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> origin/main
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

<<<<<<< HEAD
	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
=======
	result = 0;
	sign = 1;
	i = 0;
	while(str[i] == ' ')
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(ft_isdigit(str[i]))
>>>>>>> origin/main
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
<<<<<<< HEAD
	return (result * sign);
=======
	return(result * sign);

>>>>>>> origin/main
}
