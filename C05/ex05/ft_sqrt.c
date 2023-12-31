/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 18:09:30 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/30 20:11:29 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (nb == 1)
		return (1);
	if (nb % 2 == 0 || nb > 0)
	{
		while (count < nb)
		{
			if (count * count == nb)
				return (count);
			else
				count++;
		}
	}
	return (0);
}
