/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:15:10 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/21 13:08:32 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_modulo(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		return (-1);
	}
}