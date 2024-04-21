/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:53:53 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/16 13:14:42 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(char *str)
{
	int	sign;
	int nbrs;

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