/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:24:52 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/27 19:21:51 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char	*str)
{
	int	sign;
	int	nbrs;

	sign = 1;
	nbrs = 0;
	while (*str && !(*str >= 'a' && *str <= 'z')
		&& !(*str >= 'A' && *str <= 'Z'))
	{
		if (*str == '-')
			sign *= -1;
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				nbrs = (nbrs * 10) + (*str - '0');
				str++;
			}
			return (nbrs * sign);
		}
		str++;
	}
	return (0);
}
